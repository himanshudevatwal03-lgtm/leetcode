class Solution {
public:


    bool iscycle(int n, vector<vector<int>>& adj,int src,vector<bool>& visited,vector<bool>& inrec){
        visited[src]=true;
        inrec[src]=true;

        for(int &v:adj[src]){
            if(!visited[v] && iscycle(n,adj,v,visited,inrec)){
                return true;

            }else if(inrec[v]){
                return true;
            }
        }
        inrec[src]=false;
        return false;



    }


    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>>adj(n);
        for(auto &x:pre){
             adj[x[1]].push_back(x[0]);
        }
        vector<bool>visit(n,false);
        vector<bool>inrec(n,false);
        for(int i=0;i<n;i++){
            if(!visit[i] && iscycle(n,adj,i,visit,inrec)){
                return false;
            }
        }
        return true;
         

    }
};