class Solution {
public:
        int atmostk(string nums, int k){
        unordered_map<char,int>mpp;
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


    int numberOfSubstrings(string s) {
      return atmostk(s,3)-atmostk(s,2);
    }
};