class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newi) {
        int n=intervals.size();
        intervals.push_back(newi);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        vector<int>current=intervals[0];
        for(int i=1;i<n+1;i++){
            if(intervals[i][0]<=current[1]){
                current[1]=max(intervals[i][1],current[1]);
            }else{
                ans.push_back(current);
                current=intervals[i];
            }
        }
        ans.push_back(current);
        return ans;
    }
};