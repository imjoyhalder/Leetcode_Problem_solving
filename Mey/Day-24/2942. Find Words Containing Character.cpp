#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> arr;
        int n = words.size();
        for (int i = 0; i < n; i++) {
            auto it = find(words[i].begin(), words[i].end(), x);
            if (it != words[i].end()) {
                arr.push_back(i);
            }
        }
        return arr; 
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 