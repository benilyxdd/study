//https://leetcode.com/problems/binary-tree-preorder-traversal/

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
        
        res.push_back(root -> val);
        go(res, root -> left);
        go(res, root -> right);
    }
};