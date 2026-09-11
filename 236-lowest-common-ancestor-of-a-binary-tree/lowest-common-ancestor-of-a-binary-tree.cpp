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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL||p==root||q==root){
            return root;
        }
        //search in left tree
        TreeNode* left=lowestCommonAncestor(root->left,p,q);
        //search in right tree
        TreeNode* right=lowestCommonAncestor(root->right,p,q);
        //check kro ki left and right null nhi ho
        if(left!=NULL&& right!=NULL){
            return root;
        }
        //ab jo v side not eual to null h usko return ro
        if(left!=NULL){
            return left;
        }else{
            return right;
        }

        
    }
};