class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        if(n==1) return 1;
        for(int i=0;i<n;i++){
            int cnt=0;
            int sum=0;
            if(i>0){
                sum+=nums[i-1];
                cnt++;
            }
            if(i+1<n){
                sum+=nums[i+1];
                cnt++;
            }
           if(sum <= nums[i] * cnt) {
                ans++;
            }
        }
        return ans;
    }
};