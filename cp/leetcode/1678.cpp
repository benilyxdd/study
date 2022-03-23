// https://leetcode.com/problems/goal-parser-interpretation/

// O(n) - implmentation
class Solution {
public:
    string interpret(string command) {
        string ans = "";
        int n = command.length();
        bool go = false;
        for (int i = 0; i < n; i++) {
            if (command[i] == '(') {
                if (command[i + 1] == ')') {
                    ans += 'o';
                    i++;
                } else {
                    go = true;
                }
            } else if (command[i] == ')') {
                go = false;
            } else {
                ans += command[i];
            }
        }
        return ans;
    }
};