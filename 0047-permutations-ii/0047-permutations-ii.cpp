class Solution {
public:
    void findpermutation(vector<int>& v, vector<vector<int>>& ans, vector<int>& perm, vector<bool>& freq) {
        if (perm.size() == v.size()) {
            ans.push_back(perm);
            return;
        }
        for (int i = 0; i < v.size(); i++) {
            // Skip already used numbers
            if (freq[i]) continue;
            
            // Skip duplicates (important condition)
            if (i > 0 && v[i] == v[i - 1] && !freq[i - 1]) continue;
            
            // Include the number
            perm.push_back(v[i]);
            freq[i] = true;
            findpermutation(v, ans, perm, freq);
            perm.pop_back();
            freq[i] = false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort to handle duplicates
        vector<vector<int>> ans;
        vector<int> perm;
        vector<bool> freq(nums.size(), false); // Use vector<bool> instead of int array
        findpermutation(nums, ans, perm, freq);
        return ans;
    }
};
