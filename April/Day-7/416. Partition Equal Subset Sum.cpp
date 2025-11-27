#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int dp[205][20005]; 
        bool subset_sum(int n, vector<int>&arr, int s){
            if(n==0){
                if(s==0) return true; 
                else return false; 
            }
            if(dp[n][s]!=-1) return dp[n][s]; 
            if(arr[n-1]<=s){
                bool pick = subset_sum(n-1,arr,s-arr[n-1]); 
                bool nopick = subset_sum(n-1,arr,s); 
                return dp[n][s] = pick||nopick; 
            }
            else{
                bool nopick = subset_sum(n-1,arr,s); 
                return dp[n][s] = nopick; 
            }
        }
    
        bool canPartition(vector<int>& nums) {
            int n = nums.size(); 
            int s = 0; 
            for(int val: nums){
                s+=val; 
            }
            if(s%2==0){
                memset(dp,-1,sizeof(dp)); 
                int s1 = s/2; 
                return subset_sum(n,nums,s1); 
            }
            else{
                return false; 
            }
        }
    };

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 