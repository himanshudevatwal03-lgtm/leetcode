class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& dis) {
        sort(prices.begin(),prices.end(),greater<int>());
        sort(dis.begin(),dis.end(),greater<int>());
        int n=prices.size();
        int m=dis.size();
        int i=0,j=0;
        double ans=0;
        while(i<n && j<m){
            ans+=(double)prices[i]*(100-dis[j])/100;
            i++;
            j++;
        }
        while(i<n){
            ans+=prices[i];
            i++;
        }
        return ans;
    }
};