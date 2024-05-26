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
    int res = 0;
    int high(TreeNode* root)
    {
        if(root == NULL)
        return 0;

        int lh = high(root->left);
        int rh = high(root->right);
        res = max(res, lh+rh+1);
        return 1+max(rh, lh);

    }



    int diameterOfBinaryTree(TreeNode* root) {
        high(root);
        return res-1;
        
    }
};