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
       
    int n, t; cin>>n>>t; 
    vector<int> arr(n); 
    for(int &x: arr) cin>>x; 
    while(t--){
        int target ; cin>>target; 
        if(target<arr[0]) cout<<'0'<<nl; 
        else{
            int l = 0, r = n-1, ans , mid; 
            while(l<=r){
                mid = l+(r-l)/2; 
                if(arr[mid]<=target){
                    ans = mid; 
                    l = mid+1; 
                }
                else{
                    r = mid-1; 
                }
            }
            cout<<ans+1<<nl; 
        }
    }
       
    return 0;
} 