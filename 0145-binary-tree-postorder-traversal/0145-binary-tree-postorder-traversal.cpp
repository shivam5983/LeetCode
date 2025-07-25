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
    vector<int> postorderTraversal(TreeNode* root)  {
        vector<int>res;
        preorder(root,res);
        return res;
    }
   void preorder(TreeNode* node,vector<int>&res){
        if (node==nullptr)return;
        preorder(node->left,res);
        preorder(node->right,res);
        res.push_back(node->val);
    }
};