#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> buildArray(vector<int>& nums) {
            int n = nums.size(); 
            vector<int> arr; 
            for(int i=0; i<n; i++){
                arr.push_back(nums[nums[i]]); 
            }
            return arr; 
        }
    };

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 