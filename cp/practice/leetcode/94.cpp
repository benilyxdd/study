//https://leetcode.com/problems/binary-tree-inorder-traversal/

// O(n) - n -> no of node (iterative)
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        while (root || !st.empty()) {
            while (root) {
                st.push(root);
                root = root->left;
            }
            root = st.top();
            st.pop();
            ans.push_back(root->val);            
            root = root->right;
        }
        
        return ans;
    }
};

// O(u) - u -> number of node (recursive)
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