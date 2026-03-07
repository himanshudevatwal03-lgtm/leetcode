class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int count=0;
        int left=0;
        unordered_set <char> st;
        for(int i=0;i<n;i++){
            while(st.count(s[i])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[i]);
            count=max(count,i-left+1);
        }
        return count;
        
    }
};