/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    bool dfs(TreeNode* root,TreeNode* p, vector<TreeNode*>&path){
        if(root==NULL){
            return false;
        }
        path.push_back(root);
        if(root==p){
            return true;
        }
        if(dfs(root->left,p,path)||dfs(root->right,p,path)){
           return true; 
        }
        path.pop_back();
        return false;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    vector<TreeNode*>path1;
    vector<TreeNode*>path2;
    dfs(root,p,path1);
    dfs(root,q,path2);

    TreeNode* lca=NULL;
    int minlen = min(path1.size(),path2.size());
    for(int i=0; i<minlen; i++){
        if(path1[i]==path2[i]){
            lca = path1[i];
        }
        else{
            break;
        }
        
    }
    return lca;


    }
};