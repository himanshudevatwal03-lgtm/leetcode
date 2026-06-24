class Solution {
public:
    int numberOfSubstrings(string s) {
        int a=0,b=0,c=0;
        int ans=0,left=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a') a++;
            else if(s[i]=='b') b++;
            else c++;
            while(a>=1 && b>=1 && c>=1){
                 ans += s.size() - i;//aane wale charACTER KE SATH BHI JO SUBSTRING BANYEGA VO ABHI HI JOD LI
                if(s[left]=='a') a--;
                else if (s[left]=='b') b--;
                else c--;
                left++;
            }

        }
        return ans;
    }
};