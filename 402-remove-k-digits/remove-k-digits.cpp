class Solution {
public:
    string removeKdigits(string num, int k) {
     int n=num.size();
     if(n<=k) return "0";
     string res="";
     stack<char>st;
     for(int i=0;i<n;i++){
        while(k>0 && !st.empty() && num[i]<st.top()){
            k--;
            st.pop();
        }
        st.push(num[i]);
        if(st.size()==1 && num[i]=='0'){
            st.pop();
        }
     }
     while(k>0 && !st.empty()){
        k--;
        st.pop();
     } 
     while(!st.empty())  {
        res.push_back(st.top());
        st.pop();
     }
     reverse(res.begin(),res.end());
     if(res.length() == 0)
            return "0";
     return res;
    }
};