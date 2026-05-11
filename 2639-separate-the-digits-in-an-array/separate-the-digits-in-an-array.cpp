class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;

        for(int i = 0; i < nums.size(); i++) {
            vector<int> temp;

            if(nums[i] == 0) {
                temp.push_back(0);
            }

            while(nums[i] > 0) {
                temp.push_back(nums[i] % 10);
                nums[i] /= 10;
            }

            reverse(temp.begin(), temp.end());

            for(int digit : temp) {
                result.push_back(digit);
            }
        }

        return result;
    }
};