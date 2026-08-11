class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st;
        for(auto &x:nums){
            st.insert(x);
        }
        int left =0;
        int ans=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                ans+=nums[i];
            }else{
                break;
            }
        }
        for(int i=0;i<st.size();i++){
            if(st.count(ans)){
                ans++;
            }
        }
        return ans;
    }
};