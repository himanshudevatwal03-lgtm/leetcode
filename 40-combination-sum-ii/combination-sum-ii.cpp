class Solution {
public:

    void solve(vector<int>candidates,int target ,vector<vector<int>>&ans,  vector<int>&temp,int sum,int index ){
        if(sum==target){
            ans.push_back(temp);
            return;
            }
        if(sum>target || index>=candidates.size()){
            return ;
        }
        for(int i=index;i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1])
               continue;
            temp.push_back(candidates[i]);
            solve(candidates,target,ans,temp,sum+candidates[i],i+1);
            temp.pop_back();
        }
    // solve(candidates,target,ans,temp,sum,index+1);


}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        int sum=0;
        vector<int>temp;
        solve(candidates,target,ans,temp,sum,0);
        return ans;
    }
};