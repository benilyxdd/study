// https://leetcode.com/problems/maximum-depth-of-binary-tree/

// O(v) - iterateclass Solution {
class Solution {
 public:
  int maxDepth(TreeNode* root) {
    int mx = 0;
    if (!root) {
      return mx;
    }
    stack<pair<TreeNode*, int>> st;
    st.push({root, 0});
    while (!st.empty()) {
      auto [top, level] = st.top();
      mx = max(mx, level);
      st.pop();
      if (top->left) {
        st.push({top->left, level + 1});
      }
      if (top->right) {
        st.push({top->right, level + 1});
      }
    }

    return mx + 1;
  }
};

// O(u) - u -> numbers of node - hmm well.. easy
class Solution {
 public:
  int maxDepth(TreeNode* root) { return find_level(root); }

  int find_level(TreeNode* root, int cnt = 0) {
    if (!root) {
      return cnt;
    }
    return max(find_level(root->left, cnt + 1),
               find_level(root->right, cnt + 1));
  }
};

// O(u) - same but shorter
class Solution {
 public:
  int maxDepth(TreeNode* root) {
    if (!root) {
      return 0;
    }
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
  }
};