class Solution {
private:
    vector<int> comb;
    vector<vector<int>> combination;
    
    void exploring(vector<int>& nums, int target, int idx) {
        if (target == 0) {
            combination.push_back(comb);
            return;
        }
        if (target < 0 || idx >= nums.size()) return;

        for (int i = idx; i < nums.size(); i++) {
            // Skip duplicates
            if (i > idx && nums[i] == nums[i - 1]) continue;
            
            comb.push_back(nums[i]);
            exploring(nums, target - nums[i], i + 1); // Move to next index
            comb.pop_back(); // Backtrack
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); // Sort to handle duplicates
        exploring(candidates, target, 0);
        return combination;
    }
};
