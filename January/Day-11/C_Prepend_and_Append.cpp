#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;

void solve(){
    int n; cin>>n; 
    string str; 
    cin>>str; 
    
    int ans = n; 
    int l = 0, r = n-1; 
    while(l<=r){
        
        if((str[l]=='0' && str[r]=='1') or (str[l]=='1' && str[r]=='0')){
            ans -= 2; 
            if(ans==0){
                cout<<0<<nl; 
                break;
            }
            l++,r--; 
        }
        else{
            cout<<ans<<nl; 
            break;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int t; cin>>t; 
    while(t--){
        solve(); 
    }
       
    return 0;
} 