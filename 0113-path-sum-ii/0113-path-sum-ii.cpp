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
    vector<vector<int>>result;
    vector<int>currpath;
    void dfs(TreeNode* root, int target){
        if(root==NULL){
            return ;
        }
        currpath.push_back(root->val);
        if(root->left==NULL && root->right==NULL && root->val==target){
            result.push_back(currpath);
        }
        dfs(root->left,target-root->val);
        dfs(root->right,target-root->val);
        currpath.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
     dfs(root,targetSum);
     return result;   
    }
};