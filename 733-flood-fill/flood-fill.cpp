class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>visit(n,vector<int>(m));
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        queue<pair<int,int>>q;
        q.push({sr,sc});
        visit[sr][sc]=1;
        int temp=image[sr][sc];
        image[sr][sc]=color;
        while(!q.empty()){
            int a=q.front().first;
            int b=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int row=a+drow[i];
                int col=b+dcol[i];
                if(row>=0 && row<n && col>=0 && col<m && visit[row][col]!=1 && image[row][col]==temp){
                    q.push({row,col});
                    visit[row][col]=1;
                    image[row][col]=color;
                }
            }
        }
        return image;
    }
};