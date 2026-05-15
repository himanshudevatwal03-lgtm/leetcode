class Solution {
public:
    int totalFruit(vector<int>& f) {
        
        if(f.size() <= 2) return f.size();

        int b1 = 0;
        int b2 = 0;

        int lastFruit = -1;
        int secondLastFruit = -1;

        int countLast = 0;
        int curr = 0;
        int ans = 0;

        for(int i = 0; i < f.size(); i++) {

            if(f[i] == lastFruit || f[i] == secondLastFruit) {
                curr++;
            }
            else {
                curr = countLast + 1;
            }

            if(f[i] == lastFruit) {
                countLast++;
            }
            else {
                countLast = 1;
                secondLastFruit = lastFruit;
                lastFruit = f[i];
            }

            ans = max(ans, curr);
        }

        return ans;
    }
};
// class Solution {
// public:
//     int totalFruit(vector<int>& f) {
//         unordered_map<int,int> mp;
//         int left=0;
//         int ans=0;
//         for(int i=0;i<f.size();i++){
//             mp[f[i]]++;
//             while(mp.size()>2){
//                 mp[f[left]]--;
//                 if(mp[f[left]]==0){
//                     mp.erase(f[left]);
//                 }
//                 left++;
//             }
//             ans=max(ans,i-left+1);
//         }
//         return ans;
//     }
// };