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
    void inorderTraversal(TreeNode* root, vector<int>&ans) {
        //BASE CASE
        if(root==NULL){
            return;
        }
        //L
        inorderTraversal(root->left,ans);
        //N
        ans.push_back(root->val);
        //r
        inorderTraversal(root->right,ans);
    }
    vector<int>inorderTraversal(TreeNode* root){
        vector<int>ans;
        inorderTraversal(root,ans);
        return ans;
    }
};