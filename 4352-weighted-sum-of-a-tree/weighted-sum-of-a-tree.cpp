class Solution {
public:

    long long weightedSum(vector<int>& parent, vector<int>& nums) {
        int n=parent.size();
        vector<vector<int>> tree(n);
        for(int i=1;i<n;i++){
            tree[parent[i]].push_back(i);
        }
        vector<int>depth(n);
        queue<int>q;
        int h=1;
        depth[0]=1;
        q.push(0);
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(int v:tree[u]){
                depth[v]=depth[u]+1;
                h=max(h,depth[v]);
                q.push(v);
            }
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=1LL*nums[i]*(h-depth[i]+1);
        }
        return sum;
    }
};