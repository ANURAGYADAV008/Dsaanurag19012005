class Solution {
public:
    bool issafe1(int row, int col, const vector<string>& board, int n) {
        int duprow = row, dupcol = col;
        
        // Check upper diagonal
        while (row >= 0 && col >= 0) {
            if (board[row][col] == 'Q') return false;
            row--;
            col--;
        }

        // Check left side
        row = duprow;
        col = dupcol;
        while (col >= 0) {
            if (board[row][col] == 'Q') return false;
            col--;
        }

        // Check lower diagonal
        row = duprow;
        col = dupcol;
        while (row < n && col >= 0) {
            if (board[row][col] == 'Q') return false;
            row++;
            col--;
        }

        return true;
    }

    void solve(int col, vector<string>& board, vector<vector<string>>& ans, int n) {
        if (col == n) {
            ans.push_back(board);
            return;
        }
        
        for (int row = 0; row < n; row++) {
            if (issafe1(row, col, board, n)) {
                board[row][col] = 'Q'; // Place Queen
                solve(col + 1, board, ans, n);
                board[row][col] = '.'; // Backtrack
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.')); // Initialize board with '.'
        solve(0, board, ans, n);
        return ans;
    }
};
