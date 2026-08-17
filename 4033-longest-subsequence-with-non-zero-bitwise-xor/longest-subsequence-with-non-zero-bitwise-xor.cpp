class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum ^= nums[i];
        }

        if (sum != 0)
            return n;

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0)
                return n - 1;
        }

        return 0;
    }
};