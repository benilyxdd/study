// https://leetcode.com/problems/pacific-atlantic-water-flow/

// O(n * m) - dfs (stack)
class Solution {
 public:
  vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
    int n = heights.size();
    int m = heights[0].size();
    vector<vector<int>> ans;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<vector<bool>> pacific(n, vector<bool>(m, false));
    vector<vector<bool>> atlantic(n, vector<bool>(m, false));

    // pacific
    stack<array<int, 2>> st;
    for (int i = 0; i < n; i++) {
      st.push({i, 0});
    }
    for (int j = 1; j < m; j++) {
      st.push({0, j});
    }

    while (!st.empty()) {
      array<int, 2> top = st.top();
      int i = top[0], j = top[1];
      st.pop();
      if (visited[i][j]) {
        continue;
      }
      pacific[i][j] = visited[i][j] = true;

      if (i < n - 1 && heights[i + 1][j] >= heights[i][j]) {
        st.push({i + 1, j});
      }
      if (j < m - 1 && heights[i][j + 1] >= heights[i][j]) {
        st.push({i, j + 1});
      }
      if (i > 0 && heights[i - 1][j] >= heights[i][j]) {
        st.push({i - 1, j});
      }
      if (j > 0 && heights[i][j - 1] >= heights[i][j]) {
        st.push({i, j - 1});
      }
    }

    // reset visited array
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        visited[i][j] = false;
      }
    }

    // atlantic
    stack<array<int, 2>> st2;
    for (int i = 0; i < n; i++) {
      st2.push({i, m - 1});
    }
    for (int j = 0; j < m; j++) {
      st2.push({n - 1, j});
    }

    while (!st2.empty()) {
      array<int, 2> top = st2.top();
      int i = top[0], j = top[1];
      st2.pop();
      if (visited[i][j]) {
        continue;
      }
      atlantic[i][j] = visited[i][j] = true;

      if (i > 0 && heights[i - 1][j] >= heights[i][j]) {
        st2.push({i - 1, j});
      }
      if (j > 0 && heights[i][j - 1] >= heights[i][j]) {
        st2.push({i, j - 1});
      }
      if (i < n - 1 && heights[i + 1][j] >= heights[i][j]) {
        st2.push({i + 1, j});
      }
      if (j < m - 1 && heights[i][j + 1] >= heights[i][j]) {
        st2.push({i, j + 1});
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (atlantic[i][j] && pacific[i][j]) {
          ans.push_back({i, j});
        }
      }
    }

    return ans;
  }
};