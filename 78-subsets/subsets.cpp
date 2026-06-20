class Solution {
public:
    void solve(int index,vector<int>arr,vector<int>nums,vector<vector<int>>&ans){
        if(index>=nums.size()){
            ans.push_back(arr);
            return;
        }
        arr.push_back(nums[index]);
        solve(index+1,arr,nums,ans);
        arr.pop_back();
        solve(index+1,arr,nums,ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>arr;
        solve(0,arr,nums,ans);
        return ans;
    }
};