#include<bits/stdc++.h>
using namespace std;


class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            unordered_set<int> st; 
            for(int i: nums){
                if(i>k){
                    st.insert(i); 
                }
                else if(i<k){
                    return -1; 
                }
            }
            return st.size(); 
        }
    };

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 