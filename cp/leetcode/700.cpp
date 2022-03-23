// https://leetcode.com/problems/search-in-a-binary-search-tree/

// O(log n) - binary search
class Solution {
 public:
  TreeNode* searchBST(TreeNode* root, int val) {
    while (root && root->val != val) {
      if (root->val > val) {
        root = root->left;
      } else if (root->val < val) {
        root = root->right;
      }
    }
    return root;
  }
};