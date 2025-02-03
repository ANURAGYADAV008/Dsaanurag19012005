// #include <iostream>
// #include <vector>
// using namespace std;

class Solution {
public:
    void dfs(int curr, int n, vector<int>& ans) {
        if (curr > n) return; // Stop if out of bounds
        ans.push_back(curr);
        
        // Try appending 0-9 to current number
        for (int i = 0; i <= 9; i++) {
            int next = curr * 10 + i;
            if (next > n) break; // Stop if next exceeds n
            dfs(next, n, ans);
        }
    }

    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        for (int i = 1; i <= 9; i++) { // Start DFS from 1 to 9
            if (i > n) break;
            dfs(i, n, ans);
        }
        return ans;
    }
};

