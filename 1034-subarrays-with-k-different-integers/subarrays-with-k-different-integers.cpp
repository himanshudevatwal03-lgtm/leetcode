class Solution {
public:

    int atmostk(vector<int>& nums, int k){
        unordered_map<int,int>mpp;
        int left=0,i=0;
        int ans=0;
        while(i<nums.size()){
            mpp[nums[i]]++;
            while(mpp.size()>k){
                mpp[nums[left]]--;
                if(mpp[nums[left]]==0) mpp.erase(nums[left]);
                left++;
            }
            ans+=i-left+1;
            i++;
        }
        return ans;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return atmostk(nums,k)-atmostk(nums,k-1);
    }
};