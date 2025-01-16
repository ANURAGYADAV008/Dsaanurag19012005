class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
    int m= nums1.size();
    int n = nums2.size();
    //if both lengths are even result is zero
    if(m %2 ==0 && n%2==0){
        return 0;
    }
    int ans =0;
    if(m%2!=0){
        for(int x:nums2){
            ans ^= x;
        }
    }
    if(n%2!=0){
        for(int x: nums1){
            ans ^= x;
        }
    }
    return ans;
    }
};