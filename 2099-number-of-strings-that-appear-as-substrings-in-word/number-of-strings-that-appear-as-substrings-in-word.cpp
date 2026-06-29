class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(auto st:patterns){
            if (word.find(st) !=string::npos){
                count++;
            }

        }
        return count;

    }
};