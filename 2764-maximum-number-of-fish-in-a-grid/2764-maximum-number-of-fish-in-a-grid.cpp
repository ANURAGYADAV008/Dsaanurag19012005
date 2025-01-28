class Solution {
public:
    int dfs(int i, int j, vector<vector<int>>& grid,int sum) {
        int row = grid.size();
        int col = grid[0].size();
        
        // Base case: stop recursion if out of bounds or on water
        if (i < 0 || i >= row || j < 0 || j >= col || grid[i][j] == 0) {
            return 0;
        }

        // Mark the cell as visited
        sum = grid[i][j];
        grid[i][j] = 0;

        // Explore all four directions
        sum+=dfs(i + 1, j, grid,sum); // Down
        sum+=dfs(i - 1, j, grid,sum); // Up
        sum+=dfs(i, j + 1, grid,sum); // Right
        sum+=dfs(i, j - 1, grid,sum); // Left
        return sum;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int maxcount=0;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j]>0){
                    int count = dfs(i,j,grid,0);
                    maxcount =max(maxcount,count);
                }
            }
        }
        return maxcount;
    }
};