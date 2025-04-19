#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        long long find(vector<int>& nums, int limit) {
            int left = 0, right = nums.size() - 1;
            long long res = 0;
            while (left < right) {
                if (nums[left] + nums[right] <= limit) {
                    res += (right - left);
                    left++;
                } else {
                    right--;
                }
            }
            return res;
        }
    
        long long countFairPairs(vector<int>& nums, int lower, int upper) {
            sort(nums.begin(), nums.end());
            return find(nums, upper) - find(nums, lower - 1);
        }
    };

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 