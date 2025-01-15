class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mp;
        for(int n: nums){
            mp[n]++;
        }
        int ans=0;
        for(auto &m: mp){
            if(m.second > n/2){
                ans = m.first;
                break;
            }
        }
        return ans;

        
        
    }
};