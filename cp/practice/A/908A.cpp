#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int ans = 0;
	int len = s.length();
	vector<char> v;
	for (int i = 0; i < len; i++) {
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o'|| s[i] == 'u' || s[i] == 'i') {
			ans++;
		} else if (isdigit(s[i]) && s[i] % 2) {
			ans++;
			v.push_back(s[i]);
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
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
