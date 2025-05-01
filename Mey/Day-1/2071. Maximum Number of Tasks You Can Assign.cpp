#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
            sort(tasks.begin(), tasks.end());
            sort(workers.begin(), workers.end());
            
            int low = 0;
            int high = min(tasks.size(), workers.size());
            int result = 0;
            
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (canComplete(tasks, workers, pills, strength, mid)) {
                    result = mid;
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            
            return result;
        }
        
    private:
        bool canComplete(vector<int>& tasks, vector<int>& workers, int pills, int strength, int k) {
            if (k == 0) return true;
            if (k > workers.size()) return false;
            
            multiset<int> workerSet(workers.end() - k, workers.end());
            
            for (int i = k - 1; i >= 0; --i) {
                auto it = workerSet.lower_bound(tasks[i]);
                if (it != workerSet.end()) {
                    workerSet.erase(it);
                } else {
                    if (pills == 0) return false;
                    it = workerSet.lower_bound(tasks[i] - strength);
                    if (it != workerSet.end()) {
                        workerSet.erase(it);
                        --pills;
                    } else {
                        return false;
                    }
                }
            }
            
            return true;
        }
    };

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    
      
    return 0;
} 