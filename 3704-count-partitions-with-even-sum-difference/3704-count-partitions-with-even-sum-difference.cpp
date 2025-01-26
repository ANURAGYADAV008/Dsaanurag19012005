class Solution {
public:
    int countPartitions(vector<int>& nums) {
     int n=nums.size();
    vector<int>prefix(n);
    prefix[0]=nums[0];
    for(int i=1;i<n; i++){
        prefix[i] = prefix[i-1]+nums[i];
    }
    vector<int>suffix(n);
    suffix[n-1]=nums[n-1];
    for(int i=n-2; i>=0; i--){
        suffix[i]=nums[i]+suffix[i+1];
    }
    int cnt=0;

    for(int i=1; i<n; i++){
        ;
        if((prefix[i-1]-suffix[i])%2==0){
            cnt++;
        }
    }
        return cnt;
    }
};