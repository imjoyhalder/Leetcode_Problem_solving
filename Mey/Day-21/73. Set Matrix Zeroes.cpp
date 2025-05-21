#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> set1; 
        set<int> set2; 

        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                if(matrix[i][j] == 0){
                    set1.insert(i);
                    set2.insert(j);
                }
            }
        }

        for(int x: set1){
            for(int i = 0; i < matrix[x].size(); i++){
                matrix[x][i] = 0;
            }
        }

        for(int y: set2){
            for(int i = 0; i < matrix.size(); i++){
                matrix[i][y] = 0;
            }
        }
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 