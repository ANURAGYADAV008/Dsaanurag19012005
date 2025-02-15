class Solution {
public:
// Recursive function to check if we can partition the squared string to sum up to the original number
// bool canPartition(string &s, int target, int index, int current_sum) {
//     if (index == s.size()) {
//         return current_sum == target;
//     }
    
//     int num = 0;
//     for (int i = index; i < s.size(); i++) {
//         num = num * 10 + (s[i] - '0');
//         if (current_sum + num > target) break;
//         if (canPartition(s, target, i + 1, current_sum + num)) {
//             return true;
//         }
//     }
//     return false;
// }

// // Function to compute the punishment number
int punishmentNumber(int n) {
vector<int> arr = {1,   9,   10,  36,  45,  55,  82,  91,  99,  100,
                           235, 297, 369, 370, 379, 414, 657, 675, 703, 756,
                           792, 909, 918, 945, 964, 990, 991, 999, 1000};


int totalsum=0;
for(int i=0; i<arr.size(); i++){
    if(arr[i]<=n){
        totalsum += arr[i]*arr[i];
    }
    else{
        break;
    }
}
return totalsum;









//     int total_sum = 0;
//     for (int i = 1; i <= n; i++) {
//         int square = i * i;
//         string square_str = to_string(square);
        
//         if (canPartition(square_str, i, 0, 0)) {
//             total_sum += square;
//         }
//     }
//     return total_sum;
   }


};