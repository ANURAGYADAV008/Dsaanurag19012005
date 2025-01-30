class Solution {
public:
    int bfs(vector<vector<int>>&grid,int i,int j,int sum){
        int row=grid.size();
        int col = grid[0].size();
        if(i<0 || i>row-1 || j<0 || j>col-1||grid[i][j]==0){
            return 0;
        }
        sum=grid[i][j];
        grid[i][j]=0;
        sum+=bfs(grid,i+1,j,sum);
        sum+=bfs(grid,i-1,j,sum);
        sum+=bfs(grid,i,j+1,sum);
        sum+= bfs(grid,i,j-1,sum);
        return sum;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row=grid.size();
        int col = grid[0].size();
        int maxarea =0;
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j]==1){
                    int count = bfs(grid,i,j,0);
                    maxarea=max(maxarea,count);
                }
            }
        }
        return maxarea;
        
    }
    

};