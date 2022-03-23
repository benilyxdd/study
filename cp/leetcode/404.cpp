// https://leetcode.com/problems/sum-of-left-leaves/

// O(v) - stack
class Solution {
 public:
  int sumOfLeftLeaves(TreeNode* root) {
    int ans = 0;

    stack<TreeNode*> st;
    st.push(root);
    while (!st.empty()) {
      TreeNode* top = st.top();
      st.pop();

      if (top->left) {
        st.push(top->left);
        if (!top->left->left && !top->left->right) ans += top->left->val;
      }
      if (top->right) {
        st.push(top->right);
      }
    }
    return ans;
  }
};