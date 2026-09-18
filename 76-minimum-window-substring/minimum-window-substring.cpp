class Solution {
public:
    string minWindow(string s, string t) {
        int m=s.size();
        int n=t.size();
        if(m<n){
            return "";
        }
        unordered_map<char,int>mp;
        for(char c: t){
            mp[c]++;
        }
        int target=n;
        int left=0;
        int start =0;
        int end=INT_MAX;
        for(int i=0;i<m;i++){
            char ch=s[i];
            if(mp.find(ch)!=mp.end() && mp[ch]>0){
                target--;
            }
            mp[ch]--;
            if(target==0){
                while(true){
                    char cs=s[left];
                    if(mp.find(cs)!=mp.end() && mp[cs]==0){
                        break;
                    }
                    mp[cs]++;
                    left++;
                }
                if(i-left<end-start){
                    start=left;
                    end=i;
                }
                mp[s[left]]++;
                target++;
                left++;
            }
        }
        return end>=m?"":s.substr(start,end-start+1);


    }
};