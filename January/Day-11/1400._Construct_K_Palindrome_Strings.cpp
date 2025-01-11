#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()==k) return true; 
        if(s.size()<k) return false; 
        vector<int> frq(26); 
        for(char c: s){
            frq[c-'a']++; 
        }
        int oddcnt = 0; 

        for(int i=0; i<26; i++){
            if(frq[i]%2==1){
                oddcnt++; 
            }
        }
        return oddcnt<=k; 

    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    return 0;
} 