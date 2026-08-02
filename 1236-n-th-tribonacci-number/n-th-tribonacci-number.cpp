class Solution {
public:
    int tribonacci(int n) {
        if(n<=1)return n;
        if(n==2)return 1;
        int t0=0,t1=1,t2=1;
        int sum=0;
        n-=2;
        while(n--){
            sum=t0+t1+t2;
            t0=t1;
            t1=t2;
            t2=sum;
        }
        return sum; 
    }
};