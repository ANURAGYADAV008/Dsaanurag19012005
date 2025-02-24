class Solution {
public:
vector<int> findAnagrams(string s, string p) {
    vector<int> result;
    if (s.size() < p.size()) return result;

    vector<int> s_count(26, 0), p_count(26, 0);

    // Fill frequency count for p and first window of s
    for (int i = 0; i < p.size(); i++) {
        p_count[p[i] - 'a']++;
        s_count[s[i] - 'a']++;
    }

    if (s_count == p_count) result.push_back(0);

    // Sliding window
    for (int i = p.size(); i < s.size(); i++) {
        s_count[s[i] - 'a']++;     // Add new character
        s_count[s[i - p.size()] - 'a']--; // Remove old character

        if (s_count == p_count) result.push_back(i - p.size() + 1);
    }

    return result;
}

};