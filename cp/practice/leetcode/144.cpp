// https://leetcode.com/problems/binary-tree-preorder-traversal/

// O(v) - iterative
class Solution {
 public:
  vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ans;
    if (!root) {
      return ans;
    }
    stack<TreeNode*> st;
    TreeNode* cur = root;
    while (!st.empty() || cur != nullptr) {
      while (cur) {
        ans.push_back(cur->val);
        if (cur->right) {
          st.push(cur->right);
        }
        cur = cur->left;
      }

      if (!st.empty()) {
        cur = st.top();
        st.pop();
      }
    }

    return ans;
  }
};

// O(u) - u -> numbers of node
class Solution {
 public:
  vector<int> preorderTraversal(TreeNode* root) {
    vector<int> res;

    go(res, root);

    return res;
  }

  void go(vector<int>& res, TreeNode* root) {
    if (!root) {
      return;
    }

    res.push_back(root->val);
    go(res, root->left);
    go(res, root->right);
  }
};