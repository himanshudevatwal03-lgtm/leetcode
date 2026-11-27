class Solution {
public:
    bool solve(vector<vector<char>>& board, string& word,
               string& curr, int row, int col) {

        if (curr == word)
            return true;

        if (row < 0 || col < 0 ||
            row >= board.size() || col >= board[0].size())
            return false;

        if (board[row][col] == '#')
            return false;

        if (board[row][col] != word[curr.size()])
            return false;

        char ch = board[row][col];
        board[row][col] = '#';
        curr += ch;

        if (solve(board, word, curr, row + 1, col) ||
            solve(board, word, curr, row - 1, col) ||
            solve(board, word, curr, row, col + 1) ||
            solve(board, word, curr, row, col - 1))
            return true;

        curr.pop_back();
        board[row][col] = ch;

        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        string curr;

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (solve(board, word, curr, i, j))
                    return true;
            }
        }

        return false;
    }
};