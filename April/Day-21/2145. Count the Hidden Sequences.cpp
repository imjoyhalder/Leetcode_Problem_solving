#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int numberOfArrays(vector<int>& differences, int lower, int upper) {
            long long prefixSum = 0;
            long long minPrefix = 0;
            long long maxPrefix = 0;
    
            for (int diff : differences) {
                prefixSum += diff;
                minPrefix = min(minPrefix, prefixSum);
                maxPrefix = max(maxPrefix, prefixSum);
            }
            long long minX = lower - minPrefix;
            long long maxX = upper - maxPrefix;
    
            return max(0LL, maxX - minX + 1);
        }
    };

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 