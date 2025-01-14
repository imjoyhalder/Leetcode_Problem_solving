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
    int minimumLength(string s) {
        map<char,int> mp; 
        int cnt = 0; 
        for(char c: s){
            mp[c]++; 
        }
        for(auto it: mp){
            if(it.second<3){
                cnt+= it.second; 
            }
            else if(it.second%2!=0){
                cnt += 1; 
            }
            else{
                cnt += 2; 
            }
        }
        return cnt; 
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
  
    return 0;
} 