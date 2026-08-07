class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>ans;
        if(n==(maxi-mini+1)) return ans;
        
        unordered_map<int,bool>mp;
        for(auto &x:nums){
            mp[x]=true;
        }
        for(int i=mini;i<maxi;i++){
            if(!mp[i]){
                ans.push_back(i);
            }
        }
            
            
           return ans; 
    }
};