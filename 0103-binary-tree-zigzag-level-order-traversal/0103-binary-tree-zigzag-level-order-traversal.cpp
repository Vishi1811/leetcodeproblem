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
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        q.push(root);
        bool flag=true;
        while(!q.empty())
        {
            int s=q.size();
            vector<int>level(s);
            for(int i=0;i<s;i++)
            {
                TreeNode *n=q.front();
                q.pop();
                int index=flag==true?i:s-i-1;
                level[index]=n->val;
                if(n->left)
                    q.push(n->left);
                if(n->right)q.push(n->right);
        
            }
            flag=!flag;
            ans.push_back(level);

        }
        return ans;
    }
};