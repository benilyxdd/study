#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;
	string a;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		string temp = a.substr(5, 3);
		string temp2 = a.substr(0, 3);
		if (temp == s) {
			cnt++;
		}
		if (temp2 == s) {
			cnt++;
		}
	}
	cout << (cnt%2 ? "contest" : "home") << "\n";
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


