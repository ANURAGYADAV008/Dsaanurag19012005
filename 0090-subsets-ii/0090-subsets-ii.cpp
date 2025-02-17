class Solution {
public:
   void generate(vector<int> &v, vector<vector<int>> &ans, int idx, vector<int> &x) {
    if (idx == v.size()) {
        ans.push_back(x);
        return;
    }

    // Include the current element
    x.push_back(v[idx]);
    generate(v, ans, idx + 1, x);

    // Exclude the current element
    x.pop_back();
    //exclude all duplicate;
    int i=idx+1;
    while(i<v.size() && v[i]==v[i-1]){
        i++;
    }
    generate(v, ans,i, x);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    vector<int>x;
    generate(nums, ans, 0, x);
    return ans;

    }
};