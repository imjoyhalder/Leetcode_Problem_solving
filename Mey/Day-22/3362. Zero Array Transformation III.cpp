#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries)
    {
        int n = nums.size();
        int m = queries.size();

        vector<int> workload(n + 1, 0);  
        sort(queries.begin(), queries.end());

        priority_queue<int> available;
        int qIndex = 0;

        for (int time = 0; time < n; ++time)
        {
            if (time > 0)
            {
                workload[time] += workload[time - 1];
            }

        
            while (qIndex < m && queries[qIndex][0] == time)
            {
                available.push(queries[qIndex][1]);
                ++qIndex;
            }

            while (workload[time] < nums[time])
            {
                if (available.empty() || available.top() < time)
                {
                    return -1;
                }

                workload[time]++;
                workload[available.top() + 1]--;
                available.pop();
            }
        }

        return available.size(); // Remaining unused queries
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 