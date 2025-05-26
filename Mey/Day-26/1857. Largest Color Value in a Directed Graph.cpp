#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        unordered_map<int,vector<int> >adj;
        int n = colors.size();
        vector<int>ind(n,0);
        for(auto it:edges){
            
            adj[it[0]].push_back(it[1]);
            ind[it[1]]++;
            
        }
        queue<int>q;
        for(int i =0;i<n;i++){
            if(ind[i] == 0){
                q.push(i);
            }
        }
        if(q.size() == 0){
            return -1;
        }

        vector<vector<int> >dp(n,vector<int>(26,0));
        int maxi = -1;
        int cnt =0;
        while(q.size()>0){
            int frnt = q.front();
            q.pop();
            cnt++;
            int ch = colors[frnt]-'a';
            dp[frnt][ch]++;
            maxi = max(maxi,dp[frnt][ch]);
            for(auto it:adj[frnt]){
                for(int i=0;i<26;i++){
                dp[it][i] = max(dp[it][i],dp[frnt][i]);
                    maxi = max(maxi,dp[it][i]);
                }
                ind[it]--;
                if(ind[it]<=0){
                    q.push(it);
                }
            }

        }
        if(cnt != n){
            return -1;
        }
        return maxi;

        

    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 