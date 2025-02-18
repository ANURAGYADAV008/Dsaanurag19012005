class Solution {
public:
    void generateall(vector<int>&v, vector<vector<int>>&ans, vector<int>&two,int i,int k){
    if(two.size()==k){
        ans.push_back(two);
        return;
    }
    if(i>=v.size())return;
    two.push_back(v[i]);
    generateall(v,ans,two,i+1,k);
    two.pop_back();
    generateall(v,ans,two,i+1,k);
    
}
    vector<vector<int>> combine(int n, int k) {
    vector<vector<int>>ans;
    vector<int>v(n);
    for(int i=0;i<n; i++){
        v[i]=i+1;
    }
    vector<int>two;
    generateall(v,ans,two,0,k);
    return ans;
      
    }
};