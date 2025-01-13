class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n == 0) return 0;

        unordered_map<char, int> map; // To store the last seen index of each character
        int left = 0, right = 0, max_len = 0;

        while (right < n) {
            // If the character is already in the map and within the current window
            if (map.find(s[right]) != map.end() && map[s[right]] >= left) {
                // Move the left pointer to exclude the repeating character
                left = map[s[right]] + 1;
            }
            // Update the character's last seen index
            map[s[right]] = right;

            // Update the maximum length
            max_len = max(max_len, right - left + 1);

            // Expand the window by moving the right pointer
            right++;
        }

        return max_len;
    }
};