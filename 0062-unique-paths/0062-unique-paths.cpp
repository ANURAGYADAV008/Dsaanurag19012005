class Solution {
public:
    int count(int m,int n,int i,int j,vector<vector<int>>&dp){
        if(i>=n || j>=m){
            return 0;
        }
        if(i==n-1 && j==m-1){
           return 1; 
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        dp[i][j]=count(m,n,i,j+1,dp) + count(m,n,i+1,j,dp);
        return dp[i][j];

    }
    int uniquePaths(int m, int n) {
    vector<vector<int>>dp(n,vector<int>(m,-1));
    int ans = count(m,n,0,0,dp);
    return ans;
        
    }
};
