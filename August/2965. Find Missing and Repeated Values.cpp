class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& nums) {
        int n = nums.size();
        long long N = 1LL * n * n;
        long long S = 0, Sq = 0;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j) {
                long long v = nums[i][j];
                S += v;
                Sq += v * v;
            }
        long long T = N * (N + 1) / 2;
        long long Tsq = N * (N + 1) * (2 * N + 1) / 6;
        long long diff = S - T; // D - M
        long long sumDM = (Sq - Tsq) / diff; // D + M
        long long D = (diff + sumDM) / 2;
        long long M = D - diff;
        return { (int)D, (int)M };
    }
};
