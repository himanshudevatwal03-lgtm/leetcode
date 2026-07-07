class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        long long x=0,sum=0;
        for(auto c: s){
            int t=c-'0';
            if(t>0){
                x*=10;
                sum+=t;
                x+=t;
            }
        }
        return x*sum;

    }
};