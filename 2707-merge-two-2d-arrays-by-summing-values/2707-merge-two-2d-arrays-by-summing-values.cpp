class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int n=nums1.size(),m=nums2.size(),i=0;
        unordered_map<int,int> mp;
        vector<vector <int>> res;
        int limit=m>n?m:n;
        for( i=0;i<limit;i++){
            if(i<n)
         mp[nums1[i][0]]+=nums1[i][1]; // see * in intuition
            if(i<m)
         mp[nums2[i][0]]+=nums2[i][1];
        }
        i=0;
        for(auto &pair:mp)
        res.push_back({pair.first,pair.second});
        sort(res.begin(),res.end());
        return res;


    }
};