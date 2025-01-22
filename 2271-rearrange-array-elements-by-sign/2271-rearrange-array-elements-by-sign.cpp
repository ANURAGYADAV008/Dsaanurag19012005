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
      vector<int>ans;
      int l=0;
      while(l<v.size()){
       ans.push_back(v[l]);
       ans.push_back(x[l]);
       l++;
      }
      return ans;
    }
};