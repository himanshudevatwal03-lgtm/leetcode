class Solution {
public:
    string evaluate(string s, vector<vector<string>>& know) {
        int n=s.size();
        unordered_map<string,string>mp;
        for(auto it:know){
            mp[it[0]]=it[1];
        }
        string ans="";
        for(int i=n-1;i>=0;i--){
            string temp="";
            if(s[i]==')'){
                i--;
                while(s[i]!='(' && i>=0 ){
                    temp+=s[i];
                    i--;
                }
                 reverse(temp.begin(), temp.end());
                if(mp.find(temp)!=mp.end()){
                    string val = mp[temp];
                    reverse(val.begin(), val.end());
                    ans += val;
                }else{
                    ans+='?';
                }

            }else
                ans+=s[i];

        }
         reverse(ans.begin(), ans.end());
        return ans;
        
    }
};