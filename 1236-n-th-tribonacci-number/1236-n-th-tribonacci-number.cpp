class Solution {
public:
    int solve(int n, vector<int>& dp) {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        if (n == 2) {
            return 1;
        }
        if (dp[n] != -1) {
            return dp[n];
        }
        return dp[n] = solve(n - 1, dp) + solve(n - 2, dp) + solve(n - 3, dp);
    }
    
    int tribonacci(int n) {
        vector<int> dp(n + 1, -1); // Initialize dp array with -1 to indicate uncomputed    values
        if (n >= 0) dp[0] = 0;
        if (n >= 1) dp[1] = 1;
        if (n >= 2) dp[2] = 1;
        
        return solve(n, dp);
    }
};
