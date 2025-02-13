class Solution {
public:
    int find(int digit){
        int sum=0;
        
        while(digit!=0){
            sum+= digit%10;
            digit=digit/10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
     
      unordered_map<int,int>mp;
      int maxsum = -1;

      for(int i=0; i<nums.size(); i++){

        int sum = find(nums[i]);

        if(mp.find(sum)!=mp.end()){

            maxsum = max(maxsum,mp[sum]+nums[i]);
        }
        mp[sum]=max(mp[sum],nums[i]);
      } 
      return maxsum; 
    }
};