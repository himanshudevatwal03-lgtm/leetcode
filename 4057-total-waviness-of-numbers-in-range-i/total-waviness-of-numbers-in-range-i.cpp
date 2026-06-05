class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans=0;

        for (int i=num1;i<=num2;i++){
            string s=to_string(i);
            for(int j=1;j<s.size()-1;j++){
                int prev=s[j-1]-'0';
                int curr=s[j]-'0';
                int next=s[j+1]-'0';
                if((curr>prev && curr>next) || (curr<prev && curr<next)){
                    ans++;
                }
            }



        }
        return ans;
    }
};