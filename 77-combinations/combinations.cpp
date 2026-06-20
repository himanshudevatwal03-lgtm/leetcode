class Solution {
public:
    void solve(int n,int k,vector<int>&arr,vector<vector<int>> &ans){
        if(arr.size()==k){
            ans.push_back(arr);
            return ;
        }
        if(n==0)
          return;
        arr.push_back(n);
        solve(n-1,k,arr,ans);
        arr.pop_back();
        solve(n-1,k,arr,ans);
       
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>arr;
        solve(n,k,arr,ans);
        return ans;
    }
};