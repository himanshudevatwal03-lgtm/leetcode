class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count =0;
        int n = nums.size();
        
        int ans=0;
        int left=0;
        int sub_count=0;//agar aage even number hai to unke sath banne wale subarray add ho jaye isliye 

        for(int i=0;i<n;i++){
           if(nums[i]%2!=0){
            count++;
            sub_count=0;
           }
           while(count==k){
           
            if(nums[left]%2!=0){
                count--;
            }
             sub_count++;
            left++;
           }
           ans+=sub_count;
        }
        return ans;


        
    }
};