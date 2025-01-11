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
    vector<ll> arr(n); 
    for(ll &x: arr) cin>>x; 

    sort(all(arr)); 
    ll q; cin>>q; 
    while(q--){
        ll l, r; 
        cin>>l>>r; 
        
        auto it1 = lower_bound(all(arr),l); 
        auto it2 = upper_bound(all(arr),r); 

        cout<<"("<<*it1<<" ,"<<*it2<<")"<<nl; 
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    solve(); 
       
    return 0;
} 