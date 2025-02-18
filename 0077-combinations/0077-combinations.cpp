class Solution {
public:
    void generateall(int n, vector<vector<int>>&ans, vector<int>&two,int i,int k){
    if(two.size()==k){
        ans.push_back(two);
        return;
    }
    if(i>n)return;
    two.push_back(i);
    generateall(n,ans,two,i+1,k);
    two.pop_back();
    generateall(n,ans,two,i+1,k);
    
}
    vector<vector<int>> combine(int n, int k) {
    vector<vector<int>>ans;
    vector<int>two;
    generateall(n,ans,two,1,k);
    return ans;
      
    }
};