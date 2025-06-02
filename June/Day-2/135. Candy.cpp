#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        if(ratings.size()==1) return 1;

        int n=ratings.size();
        vector<int>v(n,1);

        for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1] && v[i]<=v[i-1]) v[i]=v[i-1]+1;
        }
        for(int i=ratings.size()-2;i>=0;i--){
            if(ratings[i]>ratings[i+1] && v[i]<=v[i+1]) v[i]=v[i+1]+1;
        }
        
        int ans=0;
        for(auto x:v) ans+=x;
        return ans;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 