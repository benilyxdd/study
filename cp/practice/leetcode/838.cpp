// https://leetcode.com/problems/push-dominoes/

// O(n) - deque
class Solution {
public:
    string pushDominoes(string dominoes) {
        queue<pair<int, char>> dq;
        int n = dominoes.size();
        for (int i = 0; i < n; i++) {
            if (dominoes[i] != '.') {
                dq.push({i, dominoes[i]});
            }
        }
        
        while (!dq.empty()) {
            pair<int, char> cur = dq.front();
            dq.pop();
            int index = cur.first;
            char ch = cur.second;
            if (ch == 'L') {
                if (index > 0 && dominoes[index - 1] == '.') {
                    dominoes[index - 1] = 'L';
                    dq.push({index - 1, 'L'});
                }
            } else if (ch == 'R') {
                if (index < n - 1 && dominoes[index + 1] == '.') {
                    if (index + 2 < n && dominoes[index + 2] == 'L') {
                        dq.pop();
                    } else {
                        dominoes[index + 1] = 'R';
                        dq.push({index + 1, 'R'});
                    }
                }
            }
        }
        return dominoes;
    }
};