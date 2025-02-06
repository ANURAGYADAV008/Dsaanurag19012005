class Solution {
public:
    int tupleSameProduct(vector<int>& arr) {
        
        int n = arr.size();
        int cnt = 0;

        unordered_map<int, int> m;
        for(int i = 0; i<n-1; i++) {
            for(int j = i+1; j<n; j++) {
                int mult = arr[i] * arr[j];
                cnt += (m[mult])*8;
                m[mult]++;
            }
        }
   
        return cnt;
    }
};