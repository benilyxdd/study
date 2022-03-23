// https://leetcode.com/problems/binary-tree-postorder-traversal/

// O(v) - iterative
class Solution {
 public:
  vector<int> postorderTraversal(TreeNode* root) {
    vector<int> ans;
    if (!root) {
      return ans;
    }

    TreeNode* cur;
    stack<TreeNode*> st;
    st.push(root);
    while (!st.empty()) {
      cur = st.top();
      st.pop();

      ans.push_back(cur->val);

      if (cur->left) {
        st.push(cur->left);
      }

      if (cur->right) {
        st.push(cur->right);
      }
    }
    reverse(ans.begin(), ans.end());

    return ans;
  }
};

// O(u) - u -> numbers of node
class Solution {
 public:
  vector<int> postorderTraversal(TreeNode* root) {
    vector<int> res;
    go(res, root);
    return res;
  }

  void go(vector<int>& res, TreeNode* root) {
    if (!root) {
      return;
    }

    go(res, root->left);
    go(res, root->right);
    res.push_back(root->val);
  }
};