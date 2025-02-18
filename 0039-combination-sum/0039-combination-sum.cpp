class Solution {
    private:
    vector<int>comb;
    vector<vector<int>>combination;
public:
    void exploring(vector<int>&nums,int target,int idx){
        if(target==0){
            combination.push_back(comb);
            return;
        }
        if(target<0 || idx >= nums.size())return;
        comb.push_back(nums[idx]);
        exploring(nums,target-nums[idx],idx);
        comb.pop_back();
        exploring(nums,target,idx+1);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      exploring(candidates,target,0);
      return combination;  
    }
};