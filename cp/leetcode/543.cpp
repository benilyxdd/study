// https://leetcode.com/problems/diameter-of-binary-tree/

// O(n) - recursion
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        std::function<int(TreeNode*, int&)> cal = [&](TreeNode* cur, int& ans) {
            if (!cur) return 0;
            int l = cal(cur -> left, ans);
            int r = cal(cur -> right, ans);
            ans = max(ans, l + r);
            return 1 + max(l, r);
        };
        
        int ans = 0;
        cal(root, ans);
        return ans;
    }
};