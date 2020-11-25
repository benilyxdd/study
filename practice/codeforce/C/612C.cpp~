#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool op(char c) {
	return (c == '<' || c == '{' || c == '(' || c == '[');
}

bool same(char a, char b) {
	return (a == '<' && b == '>') || (a == '{' && b == '}') || (a == '(' && b == ')') || (a == '[' && b == ']');
} 

void solve() {
	string s;
	cin >> s;
	ll ans = 0;
	stack<char> st;
	for (int i = 0; i < s.size(); i++) {
		if (op(s[i])) {
			st.push(s[i]);
		} else if (!st.empty()) {
			ans += (!same(st.top(), s[i]));
			st.pop();
		} else {
			cout << "Impossible\n";
			return;
		}
	}
	if (!st.empty()) {
		cout << "Impossible\n";
		return;
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

