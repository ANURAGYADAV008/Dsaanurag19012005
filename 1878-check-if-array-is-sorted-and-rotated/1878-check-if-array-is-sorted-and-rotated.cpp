class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int breaks = 0;
        
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i-1]) {
                breaks++;
            }
            if (breaks > 1) {
                return false;
            }
        }
        
        // If no breaks, the array is already non-decreasing
        if (breaks == 0) {
            return true;
        }
        
        // If one break, check if the array can be rotated
        return nums[n-1] <= nums[0];
    }

};