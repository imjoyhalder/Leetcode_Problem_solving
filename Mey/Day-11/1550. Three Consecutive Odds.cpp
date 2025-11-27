#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int odd = 3; 
        for(int val: arr){
            if(val%2!=0){
                odd -= 1; 
            }
            else {
                odd = 3; 
            }
            if(odd==0){
                return true; 
            }
        }
        return false; 
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 