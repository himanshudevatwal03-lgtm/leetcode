class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mpp;
        for(int i=0;i<text.size();i++){
            mpp[text[i]]++;
        }
        vector<int>freq;
        freq.push_back(mpp['b']);
        freq.push_back(mpp['a']);
        freq.push_back(mpp['l']/2);
        freq.push_back(mpp['o']/2);
        freq.push_back(mpp['n']);
        return *min_element(freq.begin(),freq.end());
    }
};