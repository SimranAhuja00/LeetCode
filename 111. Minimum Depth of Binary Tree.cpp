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
    int minDepth(TreeNode* root) {
        return Height(root);
    }
    int Height(TreeNode* root)
    {
        if(root==NULL)
            return NULL;
            
        int left_height=Height(root->left);
        int right_height=Height(root->right);

        if(left_height==0||right_height==0)
        {
            return left_height+right_height +1;
        }
        else
            return min(left_height,right_height)+1;
    }
};
