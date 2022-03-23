// https://leetcode.com/problems/validate-binary-search-tree/

// O(v) - iterative
class Solution {
 public:
  bool isValidBST(TreeNode* root) {
    if (!root) return true;
    TreeNode* pre = nullptr;
    stack<TreeNode*> st;
    while (!st.empty() || root) {
      while (root) {
        st.push(root);
        root = root->left;
      }

      root = st.top();
      st.pop();
      if (pre && root->val <= pre->val) {
        return false;
      }
      pre = root;
      root = root->right;
    }
    return true;
  }
};