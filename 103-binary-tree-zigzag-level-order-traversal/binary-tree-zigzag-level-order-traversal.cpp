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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==nullptr) return ans;
        queue<TreeNode*>que;
        que.push(root);
        bool flag=true;
        while(!que.empty()){
            int s=que.size();
            vector<int>t(s);
            for(int i=0;i<s;i++){
             TreeNode* temp=que.front();
                 que.pop();

                 int ind=flag?i:s-i-1;
                 t[ind]=temp->val;
                 if(temp->left) que.push(temp->left);
                 if(temp->right) que.push(temp->right);
            }
            flag=!flag;
            ans.push_back(t);
        }
        return ans;
    }
};