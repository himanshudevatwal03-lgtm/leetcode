class Solution {
public:
    bool checkOnesSegment(string s) {
        int count=1;
        for(int i=1;i<s.size()-1;i++){
            if(s[i]=='0'){
               if(s[i+1]=='1') count++;
            }
        }
        return count==1;
    }
};