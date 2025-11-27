#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min_el = nums[0];
        int mxdif= -1;  
        int n = nums.size(); 

        for(int i=0; i<n; i++){
            if(nums[i]>min_el){
                mxdif = max(mxdif, nums[i]-min_el); 
            }
            else{
                min_el = nums[i]; 
            }
        }
        return mxdif; 
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
    return 0;
} 