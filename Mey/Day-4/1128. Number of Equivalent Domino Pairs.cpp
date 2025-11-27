#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            map<string,int> cntMap; 
            int cnt = 0; 
            for(auto d: dominoes){
                int a = max(d[0], d[1]); 
                int b = min(d[0], d[1]); 
    
                string str = to_string(a) + ','+ to_string(b); 
                cnt += cntMap[str]; 
                cntMap[str]++; 
            }
            return cnt; 
        }
    };

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 