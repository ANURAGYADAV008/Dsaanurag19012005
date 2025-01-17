class Solution {
public:
    bool solve(int cur, int n, string &s, set<string> &m, vector<int> &dp) {
        if (cur >= n) return 1;
        if (dp[cur] != -1) return dp[cur];
        string temp = "";
        for (int i = cur; i < n; ++i) {
            temp += s[i];
            if (m.find(temp) != m.end()) {
                if (solve(i + 1, n, s, m, dp)) return dp[cur] = 1;
            }
        }
        return dp[cur] = 0;
    }
    
    bool wordBreak(string s, vector<string> &V) {
        set<string> m(V.begin(), V.end());
        int n = s.size();
        vector<int> dp(n, -1);
        return solve(0, n, s, m, dp);
    }
};
