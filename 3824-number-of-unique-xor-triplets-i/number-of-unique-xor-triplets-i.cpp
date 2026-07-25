class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
        if(n==1 || n==2) return n;
        int t=log2(nums.size());
        return pow(2,t+1);
    }
};