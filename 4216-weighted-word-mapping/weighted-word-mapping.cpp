class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;

        for (auto &w : words) {
            int sum = 0;

            for (char c : w) {
                sum += weights[c - 'a'];
            }

            sum %= 26;
            int val =26 - sum;

            ans.push_back('a' + val-1);
        }

        return ans;
    }
};

