class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
       int n= nums.size();
       int l = 0;
       int r = 1;
       while(r<=n-1){
        if(nums[l]==nums[r]){
            nums[l] = 2*nums[l];
            nums[r]=0;
            l++;
            r++;
        }
        else{
            l++;
            r++;

        }

       }
       int i=0 , j=0;
       while(j < nums.size()){
         if(nums[j]==0){
            j++;
         }
         else{
            swap(nums[i], nums[j]);
            i++;
            j++;
         }
       }
       return nums;
    }
};