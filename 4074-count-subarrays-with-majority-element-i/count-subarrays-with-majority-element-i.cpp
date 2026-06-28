class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
           int  targetcount=0;
            int j=0;
            for(j=i;j<nums.size();j++){
                if(nums[j]==target) targetcount++;
                 
             int len = j - i + 1;

                if(targetcount > len / 2)
                    ans++;
            }
           
        }
        return ans;
    }
};