class Solution {
public:

    vector<int> findOrder(int n, vector<vector<int>>& pre) {

        vector<vector<int>> adj(n);
        vector<int>in(n,0);
        for(auto x : pre) {
            adj[x[1]].push_back(x[0]);
            in[x[0]]++;
        }
        queue<int>q;
        for(int i = 0; i < n; i++) {
           if(in[i]==0){
            q.push(i);
           }
        }
        vector<int> ans;
        while(!q.empty()){
            int u=q.front();
             ans.push_back(u);
            q.pop();
            for(auto v:adj[u]){
                in[v]--;
                if(in[v]==0){
                    q.push(v);
                }
            }
        }
        if(ans.size()!=n){
            return {};
        }


        return ans;
    }
};