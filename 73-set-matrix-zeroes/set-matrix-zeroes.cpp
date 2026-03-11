class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> rows;
        vector<int> column;
        for(int row=0;row<m;row++){
            for(int col=0;col<n;col++){
                if(matrix[row][col]==0){
                    rows.push_back(row);
                    column.push_back(col);
                }
            }
        }
        for(auto r:rows){
            for(int i=0;i<n;i++){
                matrix[r][i]=0;
            }
        }
         for(auto c:column){
            for(int i=0;i<m;i++){
                matrix[i][c]=0;
            }
        }


        
    }
};