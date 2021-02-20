#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;

	int len = s.length();
	int ans = 0;
	stack<char> st;
	for (int i = 0; i < len; i++) {
		if (s[i] == '(') {
			st.push('(');
		} else if (s[i] == ')') {
			if (st.size() > 0) {
				ans += 2;
				st.pop();
			}
		}
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

