class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int op = INT_MAX;
        int sum = 0;
        int left = 0;
        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }
        int target = totalSum - x;
        if (target < 0) return -1;
        if (target == 0) return n;

        for (int i = 0; i < n; i++) {
            sum += nums[i];
            while (sum > target) {
                sum -= nums[left];
                left++;
            }
            if (sum == target) {
                op = min(op, n - (i - left + 1));
            }
        }
        if (op == INT_MAX) return -1;
        return op;
    }
};