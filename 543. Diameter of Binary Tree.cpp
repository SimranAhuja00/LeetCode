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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        Diameter(root, diameter);
        return diameter;
    }

    int Diameter(TreeNode *root,int &diameter)
    {
        if(root==NULL)
            return 0;

        int left_height=Diameter(root->left,diameter);
        int right_height=Diameter(root->right,diameter);
        diameter =max(diameter, left_height + right_height);
        return 1+max(left_height,right_height);
    }
};
