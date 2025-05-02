#include<bits/stdc++.h>
using namespace std;


class Solution {
    public:
        string pushDominoes(string dominoes) {
            string result;
    
            while (result != dominoes) {
                result = dominoes;
    
                // Temporary replacement to avoid conflict with R.L
                size_t pos = 0;
                while ((pos = dominoes.find("R.L", pos)) != string::npos) {
                    dominoes.replace(pos, 3, "-");
                    pos += 1;
                }
    
                // Replace ".L" with "LL"
                pos = 0;
                while ((pos = dominoes.find(".L", pos)) != string::npos) {
                    dominoes.replace(pos, 2, "LL");
                    pos += 2;
                }
    
                // Replace "R." with "RR"
                pos = 0;
                while ((pos = dominoes.find("R.", pos)) != string::npos) {
                    dominoes.replace(pos, 2, "RR");
                    pos += 2;
                }
            }
    
            // Restore the original "R.L"
            size_t pos = 0;
            while ((pos = dominoes.find("-", pos)) != string::npos) {
                dominoes.replace(pos, 1, "R.L");
                pos += 3;
            }
    
            return dominoes;
        }
    };
    

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 