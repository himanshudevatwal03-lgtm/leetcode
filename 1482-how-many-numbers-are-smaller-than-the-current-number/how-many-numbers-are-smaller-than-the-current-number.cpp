class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        vector<int> freq(maxi + 1, 0);
        for (int x : nums) {
            freq[x]++;
        }
        for (int i = 1; i <= maxi; i++) {
            freq[i] += freq[i - 1];
        }

        vector<int> ans;
        for (int x : nums) {
            if (x == 0)
                ans.push_back(0);
            else
                ans.push_back(freq[x - 1]);
        }

        return ans;
    }
};