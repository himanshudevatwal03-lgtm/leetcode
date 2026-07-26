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

    bool sys(TreeNode* p,TreeNode* q){
        if(p==nullptr && q==nullptr){
            return true;
        }
        if(p==nullptr || q==nullptr){
            return false;
        }
        if(p->val==q->val){
            return sys(p->left,q->right) &&  sys(p->right,q->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;
        return sys(root->left,root->right);
    }
};