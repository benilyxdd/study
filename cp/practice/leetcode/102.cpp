// https://leetcode.com/problems/binary-tree-level-order-traversal/

// O(v) - iterate
class Solution {
 public:
  vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans(1000, vector<int>());
    if (!root) {
      return vector<vector<int>>();
    }

    queue<pair<TreeNode*, int>> q;
    q.push({root, 0});
    while (!q.empty()) {
      auto [top, level] = q.front();
      q.pop();
      ans[level].push_back(top->val);
      if (top->left) {
        q.push({top->left, level + 1});
      }
      if (top->right) {
        q.push({top->right, level + 1});
      }
    }

    int level = 0;
    while (ans[level++].size()) {
    }

    ans = vector<vector<int>>(&ans[0], &ans[level - 1]);

    return ans;
  }
};

// O(u) - u -> numbers of node - recursion
class Solution {
 public:
  vector<vector<int>> levelOrder(TreeNode* root) {
    int n = find_level(root, 0);
    vector<vector<int>> res(n, vector<int>());

    go(root, 0, res);
    return res;
  }

  // find max level of the tree
  int find_level(TreeNode* root, int cnt) {
    if (!root) {
      return cnt;
    }
    return max(find_level(root->left, cnt + 1),
               find_level(root->right, cnt + 1));
  }

  void go(TreeNode* root, int cnt, vector<vector<int>>& res) {
    if (!root) {
      return;
    }
    go(root->left, cnt + 1, res);
    res[cnt].push_back(root->val);
    go(root->right, cnt + 1, res);
  }
};