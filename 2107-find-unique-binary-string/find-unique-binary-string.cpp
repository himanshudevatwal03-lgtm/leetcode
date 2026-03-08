class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        string ans = "";

        for(int i = 0; i < n; i++){
            if(nums[i][i] == '0')
                ans += '1';
            else
                ans += '0';
        }
        return ans;
    }
};
//sabke diagonal element dekh kr reverse add kr denge to ans string given string se humesha ek bit different rhegi hi rhegi