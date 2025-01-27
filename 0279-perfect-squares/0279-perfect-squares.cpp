class Solution {
public:
    
    int numSquares(int sum) {
        
        int n = sqrt(sum);

        if(n*n < sum){
            n++;
        }
        int dp[sum+1][n+1];

        for(int i=0;i<=sum;i++){
            dp[i][0] = INT_MAX;
        }

        for(int i=0;i<=n;i++){
            dp[0][i] = 1;
        }

        for(int i=1;i<=sum;i++){
            for(int j=1;j<=n;j++){
                int res = INT_MAX, x = j*j;

                if(dp[i][j-1] != INT_MAX)
                    res = min(res, dp[i][j-1]);
                
                if(i - x >= 0 ){
                    if(dp[i-x][j-1] != INT_MAX)
                        res = min(res, dp[i-x][j-1] + 1 );

                    if(dp[i-x][j] != INT_MAX)
                        res = min(res, dp[i-x][j] + 1 );
                }
                dp[i][j] = res;
            }
        }
        
        return dp[sum][n]-1;
    }
};