class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.size();
        stack<string>arr;
        string curr="";
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                arr.push(curr);
                curr="";
            }else if(s[i]==')'){
                string temp=arr.top();
                arr.pop();
                reverse(curr.begin(),curr.end());
                curr=temp+curr;
            }else{
                curr+=s[i];
            }
        }
        return curr;
    }
};