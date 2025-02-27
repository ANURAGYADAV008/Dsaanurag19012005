class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n,0);
        int neg = 1;
        int pos =0;
        for(int i=0; i<n; i++){
            if(nums[i]<0){
                result[neg]=nums[i];
                neg +=2;
            }
            else{
                result[pos]=nums[i];
                pos +=2;
            }
        }
        return result;
    }
};