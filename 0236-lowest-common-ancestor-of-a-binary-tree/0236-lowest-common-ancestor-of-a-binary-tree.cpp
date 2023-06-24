class Solution {
public:
    bool tra(TreeNode* root, int a, vector<int>& ans) {
        if (!root) return false;
        
        ans.push_back(root->val);
        if (root->val == a) return true;
        
        if (tra(root->left, a, ans) || tra(root->right, a, ans)) return true;
        
        ans.pop_back();
        return false;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<int> ans1;
        vector<int> ans2;
        
        tra(root, p->val, ans1);
        tra(root, q->val, ans2);
        
        int size = min(ans1.size(), ans2.size());
        TreeNode* lca = nullptr;
        
        for (int i = 0; i < size; i++) {
            if (ans1[i] != ans2[i]) {
                break;
            }
            lca = new TreeNode(ans1[i]);
        }
        
        return lca;
    }
};
