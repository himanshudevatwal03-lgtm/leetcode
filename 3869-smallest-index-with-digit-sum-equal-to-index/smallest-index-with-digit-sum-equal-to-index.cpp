class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i==28) return -1;
            if(nums[i]<10){
                if(nums[i]==i) return i;
            }else{
                int sum=0;
                while(nums[i]){
                    sum+=nums[i]%10;
                    nums[i]/=10;
                }
                if(sum==i) return i;
            }
        }
        return -1;
    }
};