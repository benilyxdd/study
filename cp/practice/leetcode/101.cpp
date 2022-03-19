// https://leetcode.com/problems/symmetric-tree/

// O(v) - iteration
class Solution {
 public:
  bool isSymmetric(TreeNode* root) {
    if (!root) {
      return true;
    }

    queue<TreeNode*> a, b;
    a.push(root->left);
    b.push(root->right);

    while (!a.empty() && !b.empty()) {
      TreeNode* top1 = a.front();
      TreeNode* top2 = b.front();

      a.pop();
      b.pop();

      if (!top1 && !top2) {
        continue;
      }

      if (!top1 || !top2) {
        return false;
      }

      if (top1->val != top2->val) {
        return false;
      }
      a.push(top1->left);
      a.push(top1->right);
      b.push(top2->right);
      b.push(top2->left);
    }

    return true;
  }
};

// O(u) - u -> numbers of nodes - recursion
class Solution {
 public:
  bool isSymmetric(TreeNode* root) { return ok(root, root); }

  bool ok(TreeNode* a, TreeNode* b) {
    if (!a && !b) {
      return true;
    }
    if (!a || !b) {
      return false;
    }
    if (a->val != b->val) {
      return false;
    }

    return ok(a->left, b->right) && ok(a->right, b->left);
  }
};