//https://leetcode.com/problems/unique-binary-search-trees-ii/

// O(u) - u -> numbers of node
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return ok(root, (long long)INT_MIN - 10, (long long)INT_MAX + 10);
    }
    
    bool ok(TreeNode* root, long long min, long long max) {
        if (root == NULL) {
            return true;
        }
        if (root -> val >= max || root -> val <= min) {
            return false;
        }
        return ok(root -> left, min, root -> val) && ok(root -> right, root -> val, max);
    }
};