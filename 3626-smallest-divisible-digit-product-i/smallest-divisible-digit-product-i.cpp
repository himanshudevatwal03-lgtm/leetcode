class Solution {
public:
    int smallestNumber(int n, int ti) {
        
        while(true){
            int t=n;
            int prod=1;
            while(t){
                int rem=t%10;
                prod*=rem;
                t/=10;
            }
            if(prod%ti==0){
                break;
            }else{
                n++;
            }
        }
        return n;
    }
};