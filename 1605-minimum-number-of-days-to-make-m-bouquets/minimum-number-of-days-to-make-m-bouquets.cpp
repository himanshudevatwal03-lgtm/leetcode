class Solution {
public:

bool possible(vector<int>& nums,int day, int m, int k){
    int count=0;
    int total=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<=day){
            count++;
        }else{
            total+=count/k;
            count=0;
        }
    }
    total+=count/k;
    if(total<m) return false;
    else return  true;

}

    int minDays(vector<int>& nums, int m, int k) {
        if((long long)m * k > nums.size()) return -1;
      int low=*min_element(nums.begin(),nums.end());
      int high=*max_element(nums.begin(),nums.end());
      int ans=-1;
  
      while(low<=high){
       int mid=low+(high-low)/2;
        if(possible(nums,mid,m,k)){
           ans=mid;
            high=mid-1;
        }else{
             low=mid+1;
        }
      }
      return ans;


    }
};