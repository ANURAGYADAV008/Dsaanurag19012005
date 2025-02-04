class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
      int n=nums.size();
      if(n==1){
        return nums[0];
      }
      int i=0;
      int sum1=nums[0];
      int sum2=sum1;
     for(int i=1;i<n; i++){
        if(nums[i]>nums[i-1]){
            sum1 += nums[i];
        }
        else{
            sum1=nums[i];
        }
        sum2= max(sum1,sum2);
     }
      return sum2 ;
    }
};