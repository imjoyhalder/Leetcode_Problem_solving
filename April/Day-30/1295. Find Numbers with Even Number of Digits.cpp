#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findNumbers(vector<int>& nums) {
            int countEven = 0; 
            for(int val: nums){
                string str = to_string(val); 
                if(str.size()%2==0){
                    countEven++; 
                }
            }
            return countEven; 
        }
    };
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 