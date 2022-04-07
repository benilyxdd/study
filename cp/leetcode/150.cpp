// https://leetcode.com/problems/evaluate-reverse-polish-notation/

// O(n) - implementation
class Solution {
 public:
  int evalRPN(vector<string>& tokens) {
    stack<string> st;
    int n = tokens.size();

    for (int i = 0; i < n; i++) {
      if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" &&
          tokens[i] != "/") {
        st.push(tokens[i]);
      } else {
        int top1 = stoi(st.top());
        st.pop();
        int top2 = stoi(st.top());
        st.pop();

        if (tokens[i] == "+") {
          st.push(to_string(top1 + top2));
        } else if (tokens[i] == "-") {
          st.push(to_string(top2 - top1));
        } else if (tokens[i] == "*") {
          st.push(to_string(top1 * top2));
        } else if (tokens[i] == "/") {
          st.push(to_string(top2 / top1));
        }
      }
    }

    return stoi(st.top());
  }
};