#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int countSymmetricIntegers(int low, int high) {
            int res = 0;
            for (int num = low; num <= high; num++) {
                string s = to_string(num);
                int n = s.size();
                if (n % 2 != 0) continue;
                int mid = n / 2, left = 0, right = 0;
                for (int i = 0; i < mid; i++) {
                    left += s[i] - '0';
                    right += s[i + mid] - '0';
                }
                if (left == right) res++;
            }
            return res;
        }
    };

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 