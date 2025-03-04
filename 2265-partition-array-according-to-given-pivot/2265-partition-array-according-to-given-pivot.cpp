class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        const int n = nums.size();
        vector<int> lesser; lesser.reserve(n);
        vector<int> greater; greater.reserve(n);
        int same_count = 0;
        for (int val : nums) {
            if (val < pivot) {
                lesser.push_back(val);
            } else if (val > pivot) {
                greater.push_back(val);
            } else {
                ++same_count;
            }
        }
       
        vector<int> res;
        res.reserve(nums.size());
        for (int val :lesser) {
            res.push_back(val);
          
        }
        for (int i = 0; i < same_count; ++i) {
            res.push_back(pivot);
        }       
        for (int val : greater) {
            res.push_back(val);            
        }
        return res;


    }
};