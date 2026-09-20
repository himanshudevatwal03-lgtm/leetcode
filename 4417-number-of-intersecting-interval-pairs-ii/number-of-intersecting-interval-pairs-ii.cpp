class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& in) {
        int n=in.size();
        vector<int>start(n), end(n);

        for(int i=0;i<n;i++) {
            start[i]=in[i][0];
            end[i]=in[i][1];
        }

        sort(start.begin(),start.end());
        sort(end.begin(),end.end());

        long long cnt=0;
        int j=0;

        for(int i=0;i<n;i++) {
            while(j<n && end[j]<start[i])
                j++;

            cnt +=i-j;
        }

        return cnt;
    }
};