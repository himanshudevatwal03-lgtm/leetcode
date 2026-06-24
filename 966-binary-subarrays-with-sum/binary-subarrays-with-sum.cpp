class Solution {
public:
    int atmostsum(vector<int>& nums, int goal){
        int sum=0;
        int left=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>goal && i>=left){
                sum-=nums[left];
                left++;
            }
            ans+=i-left+1;
        }
        return ans;

    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmostsum(nums,goal)-atmostsum(nums,goal-1);
    }
};