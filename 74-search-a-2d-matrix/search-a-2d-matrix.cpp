class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows =matrix.size();
        int column=matrix[0].size();
        int row=0,col=column-1;

        while(row<rows && col>-1){
            int curr=matrix[row][col];
            if(target==curr) return true;
            if(target >curr) row++;
            else col--;
        }
        return false;
    }
};