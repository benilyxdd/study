// https://leetcode.com/problems/longest-palindromic-substring/submissions/

// O(n^2) - iterative
class Solution {
 public:
  string longestPalindrome(string s) {
    int n = s.length();
    int mx = 1, start = 0;

    auto longest = [&](int i) {
      int lo = i, hi = i;
      while (lo >= 0 && hi < n && s[lo] == s[hi]) {
        if (hi - lo + 1 > mx) {
          mx = hi - lo + 1;
          start = lo;
        }
        hi++, lo--;
      }

      lo = i, hi = i + 1;
      while (lo >= 0 && hi < n && s[lo] == s[hi]) {
        if (hi - lo + 1 > mx) {
          mx = hi - lo + 1;
          start = lo;
        }
        hi++, lo--;
      }
    };

    for (int i = 0; i < n; i++) {
      longest(i);
    }

    string ans = "";
    for (int i = start; i < mx + start; i++) {
      ans += s[i];
    }

    return ans;
  }
};

// O(n) - manacher's algorithm
class Solution {
 public:
  string longestPalindrome(string s) {
    // add special char between every letter so that the algorithm can handle
    // even length input
    int n = s.length() * 2 + 1;
    string temp = "$";
    for (char& ch : s) {
      temp += ch;
      temp += '$';
    }
    s = temp;

    // main part of algorithm
    vector<int> cnt(n);
    int st = 0, en = 0;
    for (int i = 0; i < n;) {
      // expand to longest pandlindrome
      while (st > 0 && en < n - 1 && s[st - 1] == s[en + 1]) {
        st--, en++;
      }
      cnt[i] = en - st + 1;

      // breakpoint - reaches the end
      if (en == n - 1) {
        break;
      }

      // find next middle point to continue searching
      int next = en + (i % 2 == 0);
      for (int j = i + 1; j <= en; j++) {
        cnt[j] = min(cnt[i - (j - i)], 2 * (en - j) + 1);
        if (j + cnt[i - (j - i)] / 2 == en) {
          next = j;
          break;
        }
      }

      i = next;
      en = i + cnt[i] / 2;
      st = i - cnt[i] / 2;
    }

    // final print statement
    int mx = 0, pos = -1;
    for (int i = 0; i < n; i++) {
      if (cnt[i] > mx) {
        mx = cnt[i];
        pos = i;
      }
    }
    st = pos - mx / 2;
    en = pos + mx / 2;

    string ans;
    for (int i = st; i <= en; i++) {
      if (s[i] != '$') {
        ans += s[i];
      }
    }
    return ans;
  }
};