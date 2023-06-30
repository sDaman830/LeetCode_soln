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
    vector<vector<int>> levelOrder(TreeNode* root) {
       queue<TreeNode*> q;
       q.push(root);
       vector<int> k;
       vector<vector<int>> ans;
       if(root == NULL) return ans;
       while(!q.empty())
       {
     int j = q.size();
     while(j--)
     {
        TreeNode* temp = q.front();
        q.pop();
        k.push_back(temp->val);
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
     }
     ans.push_back(k);
     k.clear();
       }
       return ans;
    }
};