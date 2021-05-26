//https://leetcode.com/problems/symmetric-tree/

// O(u) - u -> numbers of nodes - recursion
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return ok(root, root);
    }
    
    bool ok(TreeNode* a, TreeNode* b) {
        if (!a && !b) {
            return true;
        }
        if (!a || !b) {
            return false;
        }
        if (a -> val != b -> val) {
            return false;
        }
        
        return ok(a -> left, b -> right) && ok(a -> right, b -> left);
    }
};