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
    bool isValidBST(TreeNode* root) {
        return isval(root,LONG_MIN,LONG_MAX);
    }
    bool isval(TreeNode* root,long min,long max)
    {
        if(root==NULL)  return true;
        if(root->val<=min || root->val>=max)    return false;
        return isval(root->left,min,root->val)&& isval(root->right,root->val,max);
    }
};