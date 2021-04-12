//https://leetcode.com/problems/valid-parentheses/

// O(n) - len of string - using stack
class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        
        stack<char> st;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            } else {
                if (st.empty()) {
                    return false;
                }
                char top = st.top();
                if (s[i] == ')') {
                    if (top != '(') {
                        return false;
                    }
                } else if (s[i] == ']') {
                    if (top != '[') {
                        return false;
                    }
                } else {
                    if (top != '{') {
                        return false;
                    }
                }
                 st.pop();
            }
        }
        return st.empty();
    }
};