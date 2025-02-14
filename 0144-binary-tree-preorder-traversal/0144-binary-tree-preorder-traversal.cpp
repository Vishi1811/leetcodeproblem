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
    void preOrder(TreeNode * root,vector<int>&pre)
{
    if(root==NULL)
        return;
    pre.push_back(root->val);
    preOrder(root->left,pre);
    preOrder(root->right,pre);
}
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>pre;
        // using recursion
        // preOrder(root,pre);
        // return pre;
        if (!root) return pre;
        stack<TreeNode *>st;
        st.push(root);
        while(!st.empty())
        {
            TreeNode *n=st.top();
            st.pop();
            pre.push_back(n->val);
            if(n->right)st.push(n->right);
            if(n->left)st.push(n->left);
            
        }
        return pre;
    }
};