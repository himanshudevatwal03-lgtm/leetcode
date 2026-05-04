class Solution {
public:
    int smallestDivisor(vector<int>& nums, int t) {
        int low = 1;  
        int high = *max_element(nums.begin(), nums.end());
        int ans = high;

        while(low <= high){
            int mid = low + (high - low) / 2;
            int total = 0;

            for(int i = 0; i < nums.size(); i++){
                total += (nums[i] + mid - 1) / mid;  
            }

            if(total <= t){
                ans = mid;
                high = mid - 1;  
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};