#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

class Solution {
public:
    bool canBeValid(string s, string l) {
        int n = s.size();
        if (n % 2 != 0) return false; 
        
        int open = 0, wildcards = 0;
        for (int i = 0; i < n; i++) {
            if (l[i] == '1') {
                open += (s[i] == '(') ? 1 : -1;
            } else {
                wildcards++;
            }
            if (open + wildcards < 0) return false; 
        }
        
        
        open = 0, wildcards = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (l[i] == '1') {
                open += (s[i] == ')') ? 1 : -1;
            } else {
                wildcards++;
            }
            if (open + wildcards < 0) return false; 
        }
        
        return true;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    return 0;
} 