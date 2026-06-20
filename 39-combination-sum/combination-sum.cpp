class Solution {
public: 
void solve(vector<int>& candidates, int target,vector<vector<int>> &ans,vector<int>& temp,int sum,int index){
    if(sum==target){
        ans.push_back(temp);
        return;
    }
    if(sum>target || index>=candidates.size()){
        return;
    }
    temp.push_back(candidates[index]);
    solve(candidates,target,ans,temp,sum+candidates[index],index);//single element can take multiple time,that's why index increase nhi kr rhe hai
    temp.pop_back();
    solve(candidates,target,ans,temp,sum,index+1);

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates,target,ans,temp,0,0);
        return ans;
    }
};