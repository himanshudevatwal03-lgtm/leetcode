class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& is) {
        int n = is.size();
        if(n == 0) return {};
        
        sort(is.begin(), is.end());
        
        vector<vector<int>> ans;
        
        vector<int> current = is[0];
        
        for(int i = 1; i < n; i++){
            
           
            if(is[i][0] <= current[1]) {
                current[1] = max(current[1], is[i][1]);
            }
            else {
                ans.push_back(current);
                current = is[i];
            }
        }
        
        ans.push_back(current);
        
        return ans;
    }
};