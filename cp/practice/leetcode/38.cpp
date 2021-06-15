//https://leetcode.com/problems/count-and-say/

// O(n) - loop
class Solution {
public:
    string countAndSay(int n) {
        string start = "1";
        for (int i = 0; i < n - 1; i++) {
            string temp;
            int k = start.length();
            for (int j = 0; j < k; j++) {
                int cnt = 1;
                while (start[j + 1] == start[j]) {
                    j++, cnt++;
                }
                temp += to_string(cnt) + start[j];
            }
            start = temp;
        }
        return start;
    }
};