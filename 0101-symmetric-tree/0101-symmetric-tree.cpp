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
    bool dfs(TreeNode* leftsub, TreeNode* rightsub) {
        // Base case: both subtrees are null
        if (leftsub == NULL && rightsub == NULL) {
            return true;
        }
        // One subtree is null while the other is not
        if (leftsub == NULL || rightsub == NULL) {
            return false;
        }
        // Check current node values and recursively check subtrees
        return (leftsub->val == rightsub->val) &&
               dfs(leftsub->left, rightsub->right) &&
               dfs(leftsub->right, rightsub->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == NULL) {
            return true; // An empty tree is symmetric
        }
        return dfs(root->left, root->right);
    }
};
