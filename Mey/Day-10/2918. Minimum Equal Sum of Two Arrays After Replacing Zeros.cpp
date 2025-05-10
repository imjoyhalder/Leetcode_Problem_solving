#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0, sum2 = 0;
        bool flag1 = false, flag2 = false;

        for(int num : nums1){
            sum1 += num;

            if(num == 0){
                sum1++;
                flag1 = true;
            }
        }

        for(int num : nums2){
            sum2 += num;

            if(num == 0){
                sum2++;
                flag2 = true;
            }
        }

        if(flag1 == false && sum1 < sum2 || flag2 == false && sum2 < sum1){
            return -1;
        }  

        return max(sum1, sum2);
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 