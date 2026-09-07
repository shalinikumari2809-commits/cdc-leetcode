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
    void preorder(TreeNode* root, vector<int>& ans) {//yha ans ceate kiye h taki root ke value ko drectly stote kr ske

        //base case
        if (root == NULL)
            return;

        // Root(N)
        ans.push_back(root->val);

        // Left(L)
        preorder(root->left,ans);

        // Right(R)
        preorder(root->right,ans);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans; //node ko store krne ke liye

        preorder(root, ans);

        return ans;
    }
};