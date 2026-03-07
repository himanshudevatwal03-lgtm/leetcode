class Solution {
public:
    int minFlips(string s) {

        int n = s.size();
        string a = s + s;

        int diff1 = 0;
        int diff2 = 0;
        int ans = INT_MAX;

        for(int i = 0; i < 2*n; i++){

            if(a[i] != (i%2 ? '1' : '0')) diff1++;
            if(a[i] != (i%2 ? '0' : '1')) diff2++;

            if(i >= n){
                if(a[i-n] != ((i-n)%2 ? '1' : '0')) diff1--;
                if(a[i-n] != ((i-n)%2 ? '0' : '1')) diff2--;
            }

            if(i >= n-1){
                ans = min(ans, min(diff1, diff2));
            }
        }

        return ans;
    }
};


// class Solution {
// public:
//     int minFlips(string s) {
//         int n = s.size();
//         int ans = INT_MAX;
//         string a = s + s;

//         for(int j = 0; j < n; j++) {
//             string tempStr = a.substr(j, n);   
//             int temp = 0;
//             for(int i = 0; i < n-1; i++){
//                 if(tempStr[i] == tempStr[i+1]){
//                     tempStr[i+1] = (tempStr[i+1] == '0') ? '1' : '0';
//                     temp++;
//                 }
//             }

//             ans = min(ans, temp);
//         }

//         return ans;
//     }
// };