class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low = 0;
        int high = nums.size() - 1;

        while(low<n-1 && nums[low]==nums[n-1]){
            low++;
        }

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > nums[high]) {
               
                low = mid + 1;
            } 
            else {
              
                high = mid;
            }
        }

        return nums[low];
    }
};