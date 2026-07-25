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
     int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        int left=maxDepth(root->left);
        int right=maxDepth(root->right);
        return max(left,right)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr) return 0;
        //diameter left yaa right subtree me bhi ho skta hai!
         int leftDiameter = diameterOfBinaryTree(root->left);
        int rightDiameter = diameterOfBinaryTree(root->right);

        int currentDiameter = maxDepth(root->left) + maxDepth(root->right);

        return max(currentDiameter, max(leftDiameter, rightDiameter));
    }
};