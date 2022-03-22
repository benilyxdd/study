// https://leetcode.com/problems/insert-into-a-binary-search-tree/

// O(log n)
class Solution {
 public:
  TreeNode* insertIntoBST(TreeNode* root, int val) {
    if (!root) {
      return new TreeNode(val);
    }
    TreeNode* cur = root;
    while (cur) {
      if (cur->val > val) {
        if (cur->left) {
          cur = cur->left;
        } else {
          cur->left = new TreeNode(val);
          break;
        }
      } else if (cur->val < val) {
        if (cur->right) {
          cur = cur->right;
        } else {
          cur->right = new TreeNode(val);
          break;
        }
      }
    }
    return root;
  }
};