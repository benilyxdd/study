#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a;
	string s;
	cin >> a >> s;
	string ans;
	vector<char> x, y;
	if (a%2) {
		for (int i = 0; i < a; i+=2) {
			y.push_back(s[i]);
		}
		for (int i = 1; i < a; i+=2) {
			x.push_back(s[i]);
		}
		reverse(x.begin(), x.end());
	} else {
		for (int i = 0; i < a; i+=2) {
			x.push_back(s[i]);
		}
		for (int i = 1; i < a; i+=2) {
			y.push_back(s[i]);
		}
		reverse(x.begin(), x.end());
	}
	for (char& c : x) {
		ans += c;
	}
	for (char& c : y) {
		ans += c;
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

