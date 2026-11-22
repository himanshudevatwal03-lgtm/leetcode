class Solution {
public:
    bool checkString(string s) {
        bool flag=false;
        for(int i=s.size()-1;i>=0;i--){
            if(flag && s[i]=='b'){
                return false;
                break;
            }
            if(s[i]=='a')
               flag=true;
        }
            return true;
    }

};