class Solution {
public:
    stack<int> st;

    bool dfs(int u, vector<vector<int>>& adj,
             vector<bool>& visited, vector<bool>& inrec) {

        visited[u] = true;
        inrec[u] = true;

        for(auto v : adj[u]) {

            if(!visited[v]) {
                if(!dfs(v, adj, visited, inrec))
                    return false;
            }
            else if(inrec[v]) {
                return false;   // cycle
            }
        }

        inrec[u] = false;
        st.push(u);

        return true;
    }

    vector<int> findOrder(int n, vector<vector<int>>& pre) {

        vector<vector<int>> adj(n);

        for(auto x : pre) {
            adj[x[1]].push_back(x[0]);
        }

        vector<bool> visited(n, false);
        vector<bool> inrec(n, false);

        for(int i = 0; i < n; i++) {
            if(!visited[i]) {
                if(!dfs(i, adj, visited, inrec))
                    return {};
            }
        }

        vector<int> ans;

        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};