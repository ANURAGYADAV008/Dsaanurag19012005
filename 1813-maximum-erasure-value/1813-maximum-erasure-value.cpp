class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n= nums.size();
        map<int,int>mp;
        int left = 0;
        int right = 0;
        int sum=0;
        int maxsum =0;
        while(right<n){
            if(mp.find(nums[right])!= mp.end() && mp[nums[right]]>=left){
                while (left <= mp[nums[right]]){
                  sum -= nums[left]; 
                  left++; 

                }

                
            }
            mp[nums[right]]=right;
            sum += nums[right];
            maxsum = max(maxsum,sum);
            right++;
        }
        return maxsum;
    }
};