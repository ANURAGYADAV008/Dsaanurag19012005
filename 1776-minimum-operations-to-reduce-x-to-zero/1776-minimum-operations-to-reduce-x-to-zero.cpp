class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
    int n= nums.size();
    unordered_map<int,int>mp;
    int sum=0;
    mp[0]=-1;
    for(int i=0; i<n; i++){
        sum += nums[i];
        mp[sum]=i;
    }
    if(sum<x){
        return -1;
    }
    int remsum = sum-x;
    int lonsub = INT_MIN;
    sum=0;
    for(int i=0;i<n; i++){
        sum+= nums[i];
        int findsum = sum-remsum;
        if(mp.find(findsum)!=mp.end()){
            int idx=mp[findsum];
            lonsub=max(lonsub,i-idx);
        }
    }
    return lonsub ==INT_MIN ?-1:(n-lonsub);
    }
};