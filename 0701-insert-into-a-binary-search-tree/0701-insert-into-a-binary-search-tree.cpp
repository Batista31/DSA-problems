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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
         TreeNode* curr = root;
        TreeNode* parent = NULL;
        if(root==NULL) return new TreeNode(val);
        while(curr)
        {
            parent=curr;
            if(val<curr->val)
            {
                curr=curr->left;
            }
            else
                curr=curr->right;
        }
        if(!curr)
        {
            if(val<parent->val)
            parent->left=new TreeNode(val);
            else
            parent->right=new TreeNode(val);
        }
        return root;
    }
};