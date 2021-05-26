//https://leetcode.com/problems/binary-tree-postorder-traversal/

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
        
        go(res, root -> left);
        go(res, root -> right);
        res.push_back(root -> val);
    }
};