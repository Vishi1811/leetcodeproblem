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
        
        vector<vector<int>>result;
        if(root==NULL)return result;
        queue<TreeNode*>q;
        bool flag=true;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int>ans(size);

            for(int i=0;i<size;i++)
            {
                TreeNode* n=q.front();
                q.pop();
                int row=(flag? i:(size-1-i));
                ans[row]=n->val;
                if(n->left)q.push(n->left);
                if(n->right)q.push(n->right);
                
            }
            flag=!flag;
            result.push_back(ans);
        }
        return result;
        
    }
};