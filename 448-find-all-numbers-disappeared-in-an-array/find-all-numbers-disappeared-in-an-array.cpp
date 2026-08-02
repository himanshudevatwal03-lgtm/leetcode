class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>ind(n+1,0);
        vector<int>ans;
        for(int &i:nums){
            ind[i]=-1;
        }
        for(int i=1;i<n+1;i++){
            if(ind[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};