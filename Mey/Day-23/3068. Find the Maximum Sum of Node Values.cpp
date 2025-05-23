#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long ans = 0;
        int minGain = INT_MAX;
        int minLoss = INT_MAX;
        bool even = true;

        for (auto num : nums) {
            int a = num ^ k;
            if (a > num) {
                minGain = min(minGain, a - num);
                ans += a;
                even = !even;
            } else {
                minLoss = min(minLoss, num - a);
                ans += num;
            }
        }

        if (!even) ans = max(ans - minGain, ans - minLoss);
        
        return ans;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 