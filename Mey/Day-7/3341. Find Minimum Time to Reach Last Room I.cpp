#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int minTimeToReach(vector<vector<int>>& moveTime) {
            int n = moveTime.size(), m = moveTime[0].size();
            const int INF = numeric_limits<int>::max();
            vector<vector<int>> dist(n, vector<int>(m, INF));
            dist[0][0] = 0;
            using T = tuple<int,int,int>;
            priority_queue<T, vector<T>, greater<T>> heap;
            heap.emplace(0, 0, 0);
            int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
            while (!heap.empty()) {
                auto [t, x, y] = heap.top(); heap.pop();
                if (t > dist[x][y]) continue;
                if (x == n-1 && y == m-1) return t;
                int nt_base = t + 1;
                for (auto &d : dirs) {
                    int dx = d[0], dy = d[1];
                    int nx = x + dx, ny = y + dy;
                    if (nx>=0 && nx<n && ny>=0 && ny<m) {
                        int nt = max(nt_base, moveTime[nx][ny] + 1);
                        if (nt < dist[nx][ny]) {
                            dist[nx][ny] = nt;
                            heap.emplace(nt, nx, ny);
                        }
                    }
                }
            }
            return -1;
        }
    };

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 