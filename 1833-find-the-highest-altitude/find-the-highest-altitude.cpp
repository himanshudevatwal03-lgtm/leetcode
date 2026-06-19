class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr=0;
        int prev=0;
        int ans=0;
        for(int i=0;i<gain.size();i++){
            prev=gain[i];
            gain[i]=curr;
            curr+=prev;
            ans=max(curr,ans);
        }
        return ans;
    }
};