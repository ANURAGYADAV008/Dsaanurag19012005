class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    int n = nums.size();
    vector<int> freq(n + 1, 0); // Use vector and initialize with 0

    for (int num : nums) {
        if (num <= n) { // Prevent out-of-bounds access
            freq[num]++;
        }
    }

    vector<int> ans;
    for (int i = 1; i <= n; i++) { // Start from 1 if values are in range [1, n]
        if (freq[i] > 1) {
            ans.push_back(i);
        }
    }

    return ans;
}

};