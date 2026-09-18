class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>ans;
        queue<int>q;
        vector<vector<int>>reverse(n);
        vector<int>out(n,0);
         vector<bool>safe(n,false);
        for(int i=0;i<graph.size();i++){
            for(int v:graph[i]){
                reverse[v].push_back(i);
            }
            out[i]=graph[i].size();
            if(out[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int u=q.front();
            q.pop();
            safe[u]=true;
            for(int v:reverse[u]){
                if(--out[v]==0) q.push(v);
            }

        }
        for(int i=0;i<n;i++){
            if(safe[i]) ans.push_back(i);
        }



        return ans;
    }
};