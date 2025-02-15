class Solution {
public:
// Recursive function to check if we can partition the squared string to sum up to the original number
bool canPartition(string &s, int target, int index, int current_sum) {
    if (index == s.size()) {
        return current_sum == target;
    }
    
    int num = 0;
    for (int i = index; i < s.size(); i++) {
        num = num * 10 + (s[i] - '0');
        if (current_sum + num > target) break;
        if (canPartition(s, target, i + 1, current_sum + num)) {
            return true;
        }
    }
    return false;
}

// Function to compute the punishment number
int punishmentNumber(int n) {
    int total_sum = 0;
    for (int i = 1; i <= n; i++) {
        int square = i * i;
        string square_str = to_string(square);
        
        if (canPartition(square_str, i, 0, 0)) {
            total_sum += square;
        }
    }
    return total_sum;
}



};