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
    vector <string> res;

    void addToPath(int val, string &path){
        path += "->" + to_string(val);
    }

    void removeFromPath(int val, string &path){
        int len = to_string(val).length() + 2; 
        while(len--) path.pop_back(); 
    }

    void traverse(TreeNode* root, string &path){
        if(!root) return;
        if(!root->left && !root->right){
            addToPath(root->val, path); 
            res.push_back(path);  
            removeFromPath(root->val, path); 
            return;
        }

        addToPath(root->val, path); 
        traverse(root->left, path); 
        traverse(root->right, path);
        removeFromPath(root->val, path); 
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        res.clear();
        string path = to_string(root->val); 
        if(!root->left && !root->right) return {path};
        

        traverse(root->left, path); 
        traverse(root->right, path); 
        return res;

    }
};