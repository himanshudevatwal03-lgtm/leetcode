class Solution {
public:
bool possible(vector<int>& weights, int days,int capacity){
    int curr=0;//current weight hai 
    int need=1;//atleast one day
    for(int x: weights){
        if(curr+x>capacity){
            need+=1;
            curr=0;
        }
         curr+=x;
    }
    if(need>days) return false;
    return true;

}
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        for(int x:weights){
            high+=x;
        }
        while(low<high){
            int mid=low+(high-low)/2;
            if(possible(weights,days,mid)){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};