class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int ans=0;
        int k=1;
        while(n){
            if(n>8){
                ans+=k*8;
                n-=8;
                k++;
            }else{
                ans+=k*n;
                n=0;
            }
        }
        return ans;
    }
};