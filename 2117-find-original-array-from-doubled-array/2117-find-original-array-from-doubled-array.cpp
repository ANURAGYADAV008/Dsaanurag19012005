class Solution {
public:
    vector<int> findOriginalArray(vector<int>& nums) {
     int n=nums.size(); 
     vector<int>ans; 
     sort(nums.begin(),nums.end());
    unordered_map<int,int>freq;
    if(n%2!=0){
        return ans;
    }
    for(int num:nums){
        freq[num]++;
    }
    for(int num:nums){
        if(freq[num]==0)continue;
        if(freq[num*2]==0){
            return {};
        }
        ans.push_back(num);
        freq[num]--;
        freq[num*2]--;
    }
      return ans;
    }
};