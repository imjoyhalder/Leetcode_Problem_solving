#include<bits/stdc++.h>
using namespace std;

class Solution {

    void dfs(int u, const vector<int> &edges, vector<int> &dist, int currDist) {

        dist[u] = currDist;

        if(edges[u] != -1) {

            int child = edges[u];

            if(dist[child] == -1) {
                dfs(child, edges, dist, currDist + 1);
            }
        }

    }
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        
        int n = edges.size();

        vector<int> dist1(n, -1);
        vector<int> dist2(n, -1);
        
        dist1[node1] = 0;
        dist2[node2] = 0;

        dfs(node1, edges, dist1, 0);
        dfs(node2, edges, dist2, 0);

        int mnDist = INT_MAX;
        int ans = -1;
        for(int i = 0; i < n; i++) {

            if(dist1[i] != -1 && dist2[i] != -1) {
                int mx = max(dist1[i], dist2[i]);

                if(mx < mnDist) {
                    mnDist = mx;
                    ans = i;
                }
            }
        }

        return ans;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 