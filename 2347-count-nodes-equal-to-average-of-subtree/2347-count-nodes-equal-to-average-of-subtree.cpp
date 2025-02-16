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
    void dfs2(TreeNode* root, int &ans){
        if(root==NULL){
            return;
        }
        int count=0;
        int sum=0;
        dfs(root,sum,count);
        if(root->val==(sum/count)){
            ans++;
        }
        dfs2(root->left,ans);
        dfs2(root->right,ans);
    }
    void dfs(TreeNode* root , int &sum,int &count){
        if(root==NULL){
            return;
        }
        sum += root->val;
        count++;
        dfs(root->left,sum,count);
        dfs(root->right,sum,count);
    }
    int averageOfSubtree(TreeNode* root) {
    int ans=0;
    dfs2(root,ans);
    return ans;  
    }
};