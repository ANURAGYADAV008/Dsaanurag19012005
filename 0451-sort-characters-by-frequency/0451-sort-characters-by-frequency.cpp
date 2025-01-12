class Solution {
public:
    string frequencySort(string s) {
    map<char, int> mp;
    for (char ch : s) {
        mp[ch]++;
    }

    priority_queue<pair<int, char>> pq;
    for (auto &n : mp) {
        pq.push({n.second, n.first});
    }

    string result = "";
    while (!pq.empty()) {
        auto it = pq.top();
        result.insert(result.end(), it.first, it.second); // Correct insertion of characters
        pq.pop();
    }

    return result;
}

    
};