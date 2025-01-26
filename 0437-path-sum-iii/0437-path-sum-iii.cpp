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
    void pathfromoneroot(TreeNode* root, long long int sum, int &ans) {
        if (root == NULL) {
            return;
        }
        if (sum == root->val) {
            ans++;
        }
        // Check left and right subtrees
        pathfromoneroot(root->left, sum - root->val, ans);
        pathfromoneroot(root->right, sum - root->val, ans);
    }

    int pathSum(TreeNode* root, int targetSum) {
        if (root == NULL) {
            return 0;
        }

        int ans = 0;

        // Find paths starting from the current root
        pathfromoneroot(root, targetSum, ans);

        // Find paths in the left and right subtrees
        ans += pathSum(root->left, targetSum);
        ans += pathSum(root->right, targetSum);

        return ans;
    }
};
