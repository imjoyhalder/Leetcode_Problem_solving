#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> helper(const vector<vector<int>>& edges) {
        vector<vector<int>> adj(edges.size() + 1);
        for(auto &it : edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        return adj;
    } 
    int dfs(const vector<vector<int>>& adj, int u, int prev, int k) {
        if(k < 0)return 0;
        int cnt = 1;
        for(int v : adj[u])
            if(v != prev)cnt += dfs(adj, v, u, k-1);
        return cnt;
    }
    
    vector<int> maxTargetNodes(vector<vector<int>>& e1, vector<vector<int>>& e2, int k) {
        auto adj1 = helper(e1), adj2 = helper(e2);
        int n = adj1.size(), m = adj2.size(), maxiB = 0;
        vector<int> ans(n); 
        for(int i = 0; i < m; i++) maxiB = max(maxiB, dfs(adj2, i, -1, k - 1));
        for(int i = 0; i < n; i++) ans[i] = dfs(adj1, i, -1, k) + maxiB;
        return ans;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 