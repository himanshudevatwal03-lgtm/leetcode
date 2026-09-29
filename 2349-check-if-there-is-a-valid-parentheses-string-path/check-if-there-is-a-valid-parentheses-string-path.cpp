class Solution {
public:
bool ans=false;
int dp[105][105][205];
    void dfs(vector<vector<char>>& grid,int open,int close,int i,int j,int m,int n){
       
        if( i>=m || j>=n ) return;
        if(grid[i][j]=='(') open++;
        else close++;
        if (close>open) return;

        if (dp[i][j][open - close] != -1) return;
        dp[i][j][open - close] = 1;

         if(i==m-1 && j==n-1 ){
            if(open==close)
                ans=true;
                return;
        }
        dfs(grid,open,close,i+1,j,m,n);
        dfs(grid,open,close,i,j+1,m,n);
    }

    bool hasValidPath(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        if(grid[0][0]==')' || grid[m-1][n-1]=='(') return false;
        memset(dp, -1, sizeof(dp));

        dfs(grid,0,0,0,0,m,n);
        return ans;
        
    }
};