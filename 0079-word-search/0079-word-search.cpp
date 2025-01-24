class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();
        
        // Traverse each cell as the starting point
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                // Start DFS if the first character matches
                if (board[i][j] == word[0]) {
                    if (dfs(board, i, j, word, 0)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

private:
    bool dfs(vector<vector<char>>& board, int row, int col, string& word, int idx) {
        // Base case: if the entire word is found
        if (idx == word.length()) {
            return true;
        }

        // Check boundary conditions and character match
        if (row < 0 || row >= board.size() || col < 0 || col >= board[0].size() || board[row][col] != word[idx]) {
            return false;
        }

        // Mark the cell as visited
        char temp = board[row][col];
        board[row][col] = '#';

        // Explore all 4 directions
        bool found = dfs(board, row + 1, col, word, idx + 1) ||  // Down
                     dfs(board, row - 1, col, word, idx + 1) ||  // Up
                     dfs(board, row, col + 1, word, idx + 1) ||  // Right
                     dfs(board, row, col - 1, word, idx + 1);    // Left

        // Backtrack: restore the cell
        board[row][col] = temp;

        return found;
    }
};
