class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        
        unordered_map<char,int> firstUpper;
        unordered_map<char,int> lastLower;

        // first occurrence of uppercase
        for(int i = 0; i < n; i++) {
            if(word[i] >= 'A' && word[i] <= 'Z') {
                if(!firstUpper.count(word[i])) {
                    firstUpper[word[i]] = i;
                }
            }
        }

        for(int i = n - 1; i >= 0; i--) {
            if(word[i] >= 'a' && word[i] <= 'z') {
                if(!lastLower.count(word[i])) {
                    lastLower[word[i]] = i;
                }
            }
        }

        int ans = 0;

        for(char ch = 'a'; ch <= 'z'; ch++) {
            char upper = ch - 32;

            if(lastLower.count(ch) && firstUpper.count(upper)) {
                if(lastLower[ch] < firstUpper[upper]) {
                    ans++;
                }
            }
        }

        return ans;
    }
};