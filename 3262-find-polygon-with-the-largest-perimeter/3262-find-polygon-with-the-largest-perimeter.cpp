class Solution {
public:
long long largestPerimeter(vector<int>& nums) {
    int n = nums.size();
    if (n < 3) return -1;

    sort(nums.begin(), nums.end()); // Sort the array in ascending order

    // Compute cumulative sums
    vector<long long> prefixSum(n, 0);
    prefixSum[0] = nums[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + nums[i];
    }

    // Check from largest side backward
    for (int i = n - 1; i >= 2; i--) {
        long long sum_of_smaller_sides = prefixSum[i - 1];
        if (sum_of_smaller_sides > nums[i]) { // Polygon condition
            return prefixSum[i]; // Perimeter of the polygon
        }
    }

    return -1; // No valid polygon
 }

};