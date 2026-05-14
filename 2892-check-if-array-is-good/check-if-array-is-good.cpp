class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n!=nums[n-1]+1) return false;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1] && i<n-2){
                return false;
            }
        }
        return true;
    }
};