//https://leetcode.com/problems/binary-tree-level-order-traversal/

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
        return max(find_level(root -> left, cnt + 1), find_level(root -> right, cnt + 1));
    }
    
    void go(TreeNode* root, int cnt, vector<vector<int>>& res) {
        if (!root) {
            return;
        }
        go(root -> left, cnt + 1, res);
        res[cnt].push_back(root -> val);
        go(root -> right, cnt + 1, res);
    }
};