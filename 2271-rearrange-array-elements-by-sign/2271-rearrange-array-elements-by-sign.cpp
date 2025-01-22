class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      vector<int>v;
      vector<int>x;
      for(int i=0; i<nums.size(); i++){
         if(nums[i]>0){
            v.push_back(nums[i]);
         }
         else{
            x.push_back(nums[i]);
         }
      }
      int l=0;
      int i=0;
      while(l<v.size()){
       nums[i]=v[l];
       i++;
       nums[i]=x[l];
       i++;
       l++;
      }
      return nums;
    }
};