class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {

        vector<vector<int>> mat(n);

        for (auto &x : invocations) {
            mat[x[0]].push_back(x[1]);
        }

        vector<bool> sus(n, false);

        queue<int> q;
        q.push(k);
        sus[k] = true;

        while (!q.empty()) {
            int t = q.front();
            q.pop();

            for (int i = 0; i < mat[t].size(); i++) {
                int nxt = mat[t][i];
                if (!sus[nxt]) {
                    sus[nxt] = true;
                    q.push(nxt);
                }
            }
        }

        vector<int> ans;
        //agar ek bhi unsuspicious method suspicious ko direct invoke krti hai to pura array return nhoga
        for(auto &x:invocations){
            if(!sus[x[0]] && sus[x[1]]){
                for(int i=0;i<n;i++){
                    ans.push_back(i);
                }
                return ans;
            }
        }

        for (int i = 0; i < n; i++) {
            if (!sus[i])
                ans.push_back(i);
        }

        return ans;
    }
};