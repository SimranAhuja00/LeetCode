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
    void swap(TreeNode *curr)
    {
        if(!curr) //if current node is null
        {
            return;
        }

        swap(curr->left);
        swap(curr->right);

        //Swap the child pointers
        TreeNode *temp; //temp variable to be used for swapping
        temp = curr->left;
        curr->left = curr->right;
        curr->right = temp;
    }
public:
    TreeNode* invertTree(TreeNode* root) {

        swap(root); 
        return root;
    }
};
