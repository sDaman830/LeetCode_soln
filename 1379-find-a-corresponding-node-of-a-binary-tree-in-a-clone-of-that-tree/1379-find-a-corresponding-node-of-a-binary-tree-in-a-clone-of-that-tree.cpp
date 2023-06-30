class Solution {
public:
    TreeNode* trav(TreeNode* root, TreeNode* target) {
        if (!root) return nullptr;

        if (root->val == target->val) {
            return root;
        }

        TreeNode* leftResult = trav(root->left, target);
        if (leftResult) {
            return leftResult;
        }

        return trav(root->right, target);
    }

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return trav(cloned, target);
    }
};
