class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
      int row=grid.size();
      int col= grid[0].size();
      int perimeter=0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (grid[i][j] == 1) {
                // Start with 4 sides
                perimeter += 4;
                
                // Check the top neighbor
                if (i > 0 && grid[i - 1][j] == 1) {
                    perimeter -= 1;
                }
                
                // Check the bottom neighbor
                if (i < row - 1 && grid[i + 1][j] == 1) {
                    perimeter -= 1;
                }
                
                // Check the left neighbor
                if (j > 0 && grid[i][j - 1] == 1) {
                    perimeter -= 1;
                }
                
                // Check the right neighbor
                if (j < col - 1 && grid[i][j + 1] == 1) {
                    perimeter -= 1;
                }
            }
        }
    }
    
    return perimeter;
    }
};