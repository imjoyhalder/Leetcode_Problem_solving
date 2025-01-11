#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define all(v) v.begin(),v.end()
#define print(v) for(auto data: v) cout<<data<<' '
#define yes cout<<"YES"<<nl; 
#define no cout<<"NO"<<nl; 
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
       
    int n,m; cin>>n>>m; 
    vector<int> arr1(n),arr2(m),result; 

    for(int &x: arr1) cin>>x; 
    for(int &x: arr2) cin>>x; 

     ll cnt = 0; 
    int l=0,r=0; 
    while(r<m){
        if(l<n && arr1[l]<arr2[r]){
            l++,cnt++; 
        }
        else{
            cout<<cnt<<' '; 
            r++; 
            
        }
    }
    return 0;
} 