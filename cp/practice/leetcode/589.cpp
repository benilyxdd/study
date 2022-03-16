// https://leetcode.com/problems/n-ary-tree-preorder-traversal/

// O(n) - iterative
class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> ans;
        if (!root) {
            return ans;
        }
        
        stack<Node*> st;
        st.push(root);
        while (!st.empty()) {
            Node *cur = st.top();
            st.pop();
            ans.push_back(cur -> val);
            for (int i = cur -> children.size() - 1; i >= 0; i--) {
                st.push(cur -> children[i]);
            }
        }
        
        return ans;
    }
};