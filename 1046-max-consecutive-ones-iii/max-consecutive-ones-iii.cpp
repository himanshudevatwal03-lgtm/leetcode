class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int  maxcount=0;
        int left=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=1){
                count++;
            }
             while (count > k) {
                if (nums[left] == 0) {
                    count--;
                }
                left++;
            }
            maxcount=max(maxcount,i-left+1);
        }
        return maxcount;

    }
};