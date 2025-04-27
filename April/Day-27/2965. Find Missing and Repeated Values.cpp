#include<bits/stdc++.h>
using namespace std;


class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            int n = grid.size(), twice = -1;
            for (int i = 0; i < n; i++){
                for (int j = 0; j < n; j++){
                    int num = abs(grid[i][j]) - 1;
                    int r = num / n, c = num % n;
                    if (grid[r][c] < 0)
                        twice = num + 1;
                    else
                        grid[r][c] = -grid[r][c];
                }
            }
            for (int r = 0; r < n; r++)
                for (int c = 0; c < n; c++)
                    if (grid[r][c] > 0)
                        return {twice, r * n + c + 1};
            return vector<int>(2);
        }
    };
    

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 