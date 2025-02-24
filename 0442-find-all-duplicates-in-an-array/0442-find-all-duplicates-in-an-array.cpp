class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    int n=nums.size();
    vector<int>freq(n+1,0);
    for(int num:nums){
        freq[num]++;
    }
    vector<int>ans;
    for(int i=0;i<freq.size();i++){
        if(freq[i]>1){
            ans.push_back(i);
        }
    }

    return ans;
}

};