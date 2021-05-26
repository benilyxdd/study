//https://leetcode.com/problems/binary-tree-inorder-traversal/

// O(u) - u -> 
number of node
class Solution {
public:
    vector<int> res;
    vector<int> inorderTraversal(TreeNode* root) {
        if (root == NULL) {
            return res;
        }
        
        inorderTraversal(root -> left);
        res.push_back(root -> val);
        inorderTraversal(root -> right);
        
        
        return res;
    }
};