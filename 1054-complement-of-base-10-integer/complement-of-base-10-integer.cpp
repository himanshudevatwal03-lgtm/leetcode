class Solution {
public:
    int bitwiseComplement(int n) {
        int x=n;
        int mask=0;
        if(n==0) return 1;
        while(x){
            x=x>>1;
           mask++;
        }
        int ans=(1<<mask);
        return ans-n-1;
        
    }
};