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
   bool dfs(TreeNode* root, long max, long min){
    if(root==NULL){
        return true;
    }
    if(root->val <=min || root->val>=max){
        return false;
    }
    return dfs(root->left,root->val,min) && dfs(root->right,max,root->val);
    
    
   }
    bool isValidBST(TreeNode* root) {
      return dfs(root,LONG_MAX,LONG_MIN);  
    }
};