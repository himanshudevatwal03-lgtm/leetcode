class Solution {
public:
    int maxIceCream(vector<int>& arr, int coins) {
     int maxi = *max_element(arr.begin(), arr.end());

    vector<int> count(maxi + 1, 0);
    for (int x : arr)
        count[x]++;
    int idx = 0;
    for (int i = 0; i <= maxi; i++) {
        while (count[i] > 0) {
            arr[idx++] = i;
            count[i]--;
        }
    }
    int ans=0,sum=0;
    for(int i=0;i<arr.size();i++){
        if(sum+arr[i]<=coins ){
            sum+=arr[i];
            ans++;
        }else{
            break;
        }
    }
    return ans;
    }
};