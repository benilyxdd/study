#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	string pre = "((((((((((", sub = "))))))))))";
	s.insert(0, "0");
	s+='0';
	for (int i = 0; i < s.length()-1; i++) {
		if (s[i] > s[i+1]) {
			int xd = s[i] - s[i+1];
			s.insert(i+1, sub, 0, xd);
			i += xd;
		} else if (s[i] < s[i+1]) {
			int xd = s[i+1] - s[i]; 
			s.insert(i+1, pre, 0, xd);
			i += xd;
		}
	}
	string ans(s, 1, s.length()-2);
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

