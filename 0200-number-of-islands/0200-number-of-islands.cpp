class Solution {
public:
    void dfs(int i, int j, vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        // Base case: stop recursion if out of bounds or on water
        if (i < 0 || i >= row || j < 0 || j >= col || grid[i][j] == '0') {
            return;
        }

        // Mark the cell as visited
        grid[i][j] = '0';

        // Explore all four directions
        dfs(i + 1, j, grid); // Down
        dfs(i - 1, j, grid); // Up
        dfs(i, j + 1, grid); // Right
        dfs(i, j - 1, grid); // Left
    }

    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int count = 0;

        // Traverse the grid
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == '1') {
                    // Found an island, increment count and call DFS to mark it
                    dfs(i, j, grid);
                    count++;
                }
            }
        }

        return count; // Return the total number of islands
    }
};
