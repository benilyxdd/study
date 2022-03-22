// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

// O(log n) - binary search
class Solution {
 public:
  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    // min(p -> val, q -> val) >= target >= max(p -> val, q -> val);
    int mn = min(p->val, q->val);
    int mx = max(p->val, q->val);

    while (root) {
      // if (root -> val >= mn && root -> val <= mx) {
      //     break;
      // }

      if (root->val > mx) {
        root = root->left;
      } else if (root->val < mn) {
        root = root->right;
      } else {
        break;
      }
    }
    return root;
  }
};