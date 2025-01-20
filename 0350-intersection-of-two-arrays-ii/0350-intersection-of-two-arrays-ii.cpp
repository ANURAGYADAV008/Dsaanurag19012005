class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>count;
        vector<int>ans;
        for(int num:nums1){
            count[num]++;
        }
        for(int num: nums2){
            if(count[num]>0){
                ans.push_back(num);
                count[num]--;
            }
        }
        return ans;

    }
};