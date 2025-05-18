#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    static constexpr int MOD = 1e9 + 7;
    vector<string> patterns;
    vector<vector<int>> memo;

    void generate(string cur, int rem, char prev) {
        if (rem == 0) {
            patterns.push_back(cur);
            return;          
        }
        for (char c : {'R','G','B'}) {
            if (c == prev) continue;
            generate(cur + c, rem - 1, c);
        }
    }

    
    int dp(int r, int i, int m) {
        if (r == 0) return 1;
        int &ans = memo[r][i];
        if (ans != -1)         
            return ans;
        long long total = 0;
        const string &below = patterns[i];
        
        for (int j = 0; j < (int)patterns.size(); j++) {
            const string &above = patterns[j];
            bool ok = true;
            for (int k = 0; k < m; k++) {
                if (below[k] == above[k]) {
                    ok = false;
                    break;
                }
            }
            if (ok)
                total = (total + dp(r - 1, j, m)) % MOD;
        }
        return ans = total;
    }

    int colorTheGrid(int m, int n) {
        patterns.clear();
        generate("", m, '.');
        int p = patterns.size();
        memo.assign(n, vector<int>(p, -1));

        long long answer = 0;
        for (int i = 0; i < p; i++) {
            answer = (answer + dp(n - 1, i, m)) % MOD;
        }
        return (int)answer;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 