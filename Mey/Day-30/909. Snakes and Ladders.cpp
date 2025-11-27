#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        vector<int> flatten(n * n + 1, -1);
        int idx = 1;
        bool leftToRight = true;

        for (int i = n - 1; i >= 0; --i) {
            if (leftToRight) {
                for (int j = 0; j < n; ++j)
                    flatten[idx++] = board[i][j];
            } else {
                for (int j = n - 1; j >= 0; --j)
                    flatten[idx++] = board[i][j];
            }
            leftToRight = !leftToRight;
        }

        queue<int> q;
        vector<bool> visited(n * n + 1, false);
        q.push(1);
        visited[1] = true;
        int moves = 0;

        while (!q.empty()) {
            int sz = q.size();
            while (sz--) {
                int curr = q.front(); q.pop();
                if (curr == n * n) return moves;
                for (int i = 1; i <= 6 && curr + i <= n * n; ++i) {
                    int next = curr + i;
                    int dest = flatten[next] == -1 ? next : flatten[next];
                    if (!visited[dest]) {
                        visited[dest] = true;
                        q.push(dest);
                    }
                }
            }
            moves++;
        }

        return -1;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 