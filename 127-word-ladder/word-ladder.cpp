class Solution {
public:
    int ladderLength(string b, string e, vector<string>& w) {
        unordered_set<string> word(w.begin(), w.end());

        if (word.find(e) == word.end())
            return 0;

        unordered_set<string> begin{b};
        unordered_set<string> end{e};
        unordered_set<string> visited{b};

        int steps = 1;

        while (!begin.empty() && !end.empty()) {

            if (begin.size() > end.size())
                swap(begin, end);

            unordered_set<string> nextSet;

            for (string current : begin) {
                for (int i = 0; i < current.size(); i++) {
                    char original = current[i];

                    for (char c = 'a'; c <= 'z'; c++) {
                        if (c == original)
                            continue;

                        current[i] = c;

                        if (end.count(current))
                            return steps + 1;

                        if (word.count(current) && !visited.count(current)) {
                            visited.insert(current);
                            nextSet.insert(current);
                        }
                    }

                    current[i] = original;
                }
            }

            begin = nextSet;
            steps++;
        }

        return 0;
    }
};