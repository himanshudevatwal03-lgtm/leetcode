class Solution {
public:
    int maxProduct(int n) {
        vector<int>arr;
        while(n){
            int rem=n%10;
            arr.push_back(rem);
            n/=10;
        }
        sort(arr.begin(),arr.end());
        int s=arr.size();
        return arr[s-1]*arr[s-2];
    }
};