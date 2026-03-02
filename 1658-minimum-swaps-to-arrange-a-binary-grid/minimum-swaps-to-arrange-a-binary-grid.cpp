class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int s=0;
        int n=grid.size();
        vector<int> trail;
       for(int i=0;i<n;i++){
        int count=0;
        for(int j=n-1;j>0;j--){
            if(grid[i][j]==0){
                count++;
            }else{
                break;
            }
        }
        trail.push_back(count);
       }
       for(int i=0;i<n;i++){
        int need=n-i-1;
        int j=i;
        while(j<n && trail[j]<need) j++;
        if(j==n) return -1;
        while(j>i){
            swap(trail[j],trail[j-1]);
            j--;
            s++;
        }
        }
       return s;
    }
};