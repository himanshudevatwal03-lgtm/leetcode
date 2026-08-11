class Solution {
public:

    void dfs(int src,vector<vector<int>>& adj,vector<bool>& visit){
        visit[src]=true;
        stack<int>st;
        st.push(src);
        while(!st.empty()){
            int u=st.top();
            st.pop();
            for(int v:adj[u]){
                if(!visit[v]){
                visit[v]=true;
                st.push(v);
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& is) {
        int n=is.size();
        vector<vector<int>>adj(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(is[i][j]==1 &&  i!=j){
                    adj[i].push_back(j);
                }
            }
        }
        vector<bool>visit(n,false);
        int count=0;
        for(int i=0;i<n;i++){
            if(!visit[i]){
                count++;
                dfs(i,adj,visit);
            }
        }
        return count ;
    }
};