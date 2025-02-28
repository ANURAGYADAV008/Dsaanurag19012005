class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size(), count = 0;
        vector<vector<int>> dp(n,vector<int>(n,-1));
    
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int next = arr[j]-arr[i];
                int idx_next = -1;
               
                int start = 0, end = i-1;
                while(start<=end && idx_next==-1){
                    int mid = (start + end)/2;
                    if(arr[mid]==next){
                         idx_next = mid;
                    }
                    else if(arr[mid]>next) end = mid-1;
                    else start = mid+1;
                }
                
                if(idx_next!=-1 && idx_next<i){
                    dp[i][j] = dp[idx_next][i]+1;
                    count = max(count,dp[i][j]);
                }else{
                    dp[i][j] = 2;
                }
            }
        }
        return count;
    }
};