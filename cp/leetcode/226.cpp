// https://leetcode.com/problems/invert-binary-tree/

// O(v) - bfs
class Solution {
 public:
  TreeNode* invertTree(TreeNode* root) {
    if (!root) return root;

    queue<TreeNode*> q;
    q.push(root);
    TreeNode* cur;

    while (!q.empty()) {
      cur = q.front();
      q.pop();

      if (cur->left) {
        q.push(cur->left);
      }

      if (cur->right) {
        q.push(cur->right);
      }

      swap(cur->left, cur->right);
    }

    return root;
  }
};