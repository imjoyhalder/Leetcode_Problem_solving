#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string triangleType(vector<int>& nums) {
        bool ans = false; 
        int a = nums[0], b = nums[1], c = nums[2];

        if(a+b>c && b+c>a && a+c>b){
            ans = true;
        }

        if(ans){
            if(a == b && b==c && c==a){
                return "equilateral";
            } else if(a!=b && b!=c && c!=a){
                return "scalene";
            } else {
                return "isosceles";
            }
        }
        return "none";
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 