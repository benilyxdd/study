// https://leetcode.com/problems/path-sum/

// O(v) - bfs
class Solution {
 public:
  bool hasPathSum(TreeNode* root, int targetSum) {
    if (!root) {
      return false;
    }

    stack<pair<TreeNode*, int>> st;
    st.push({root, root->val});

    while (!st.empty()) {
      auto [node, total] = st.top();
      st.pop();
      if (!node->left && !node->right && total == targetSum) {
        return true;
      }

      if (node->left) {
        st.push({node->left, total + node->left->val});
      }

      if (node->right) {
        st.push({node->right, total + node->right->val});
      }
    }
    return false;
  }
};