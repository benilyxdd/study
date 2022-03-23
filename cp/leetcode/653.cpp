// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

// O(v) - inoder traversal
class Solution {
 public:
  bool findTarget(TreeNode* root, int k) {
    unordered_set<int> targetList;
    stack<TreeNode*> st;
    while (!st.empty() || root) {
      while (root) {
        st.push(root);
        root = root->left;
      }
      root = st.top();
      st.pop();
      if (targetList.find(root->val) != targetList.end()) {
        return true;
      }
      targetList.insert(k - root->val);

      root = root->right;
    }
    return false;
  }
};