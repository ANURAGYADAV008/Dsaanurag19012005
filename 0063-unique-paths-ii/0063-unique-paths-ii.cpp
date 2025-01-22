class Solution {
public:
    int solve(vector<vector<int>>&Grid,int n,int m,int i, int j, vector<vector<int>>&dp){
        if(i>=n || j>=m || Grid[i][j]==1){
            return 0;
        }
        if(i==n-1 && j==m-1){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        dp[i][j] = solve(Grid,n,m,i,j+1,dp) + solve(Grid,n,m,i+1,j,dp);
        return dp[i][j];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m= obstacleGrid[0].size();
        vector<vector<int>>dp(n,vector<int>(m+1,-1));
        return solve(obstacleGrid,n,m,0,0,dp);
        
    }
};