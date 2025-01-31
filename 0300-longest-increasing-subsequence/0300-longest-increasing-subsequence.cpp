class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return 0;
    
    vector<int> dp(n, 1);  // dp[i] will store the length of LIS ending at arr[i]
    
    // Fill the dp array
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) {  // If arr[i] can be added to LIS ending at arr[j]
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    
    // The length of the longest increasing subsequence will be the max value in dp[]
    return *max_element(dp.begin(), dp.end());
}

    
};