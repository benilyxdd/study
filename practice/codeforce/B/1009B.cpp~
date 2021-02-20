#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;

void solve() {
	string s;
	cin >> s;

	int len = s.length(), cnt = 0;
	string ans;
	for (int i = 0; i < len; i++) {
		if (s[i] == '1') {
			cnt++;
		} else {
			ans += s[i];
		}
	}

	int pos = -1, len2 = ans.length();
	for (; pos < len2-1; pos++) {
		if (ans[pos+1] == '2') {
			break;
		}
	}
	ans.insert(pos+1, string(cnt, '1'));
	cout << ans;
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

