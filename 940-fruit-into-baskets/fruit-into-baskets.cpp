class Solution {
public:
    int totalFruit(vector<int>& f) {
        unordered_map<int,int> mp;
        int left=0;
        int ans=0;
        for(int i=0;i<f.size();i++){
            mp[f[i]]++;
            while(mp.size()>2){
                mp[f[left]]--;
                if(mp[f[left]]==0){
                    mp.erase(f[left]);
                }
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};