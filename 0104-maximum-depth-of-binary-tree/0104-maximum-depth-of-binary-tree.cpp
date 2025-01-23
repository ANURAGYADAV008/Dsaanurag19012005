/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    vector<int>ans;
    void dfs(TreeNode* root,int depth){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            ans.push_back(depth);
            return;
        }
        dfs(root->left,depth+1);
        dfs(root->right,depth+1);

    }

    int maxDepth(TreeNode* root) {
    if(root==NULL){
        return 0;
    }
    dfs(root,1);
    return *max_element(ans.begin(),ans.end());
        
        
    }
};