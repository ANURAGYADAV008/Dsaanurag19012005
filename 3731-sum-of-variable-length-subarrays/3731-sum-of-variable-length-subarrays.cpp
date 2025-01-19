class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=max(0,i-nums[i]); j<=i; j++){
                sum+= nums[j];
            }
        }
        return sum;
    }
};