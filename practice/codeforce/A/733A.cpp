#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int n = s.length();
	int mx = 0, temp = 0;
	auto it1 = find(s.begin(), s.end(), 'A');
	auto it2 = find(s.begin(), s.end(), 'E');
	auto it3 = find(s.begin(), s.end(), 'I');
	auto it4 = find(s.begin(), s.end(), 'O');
	auto it5 = find(s.begin(), s.end(), 'U');
	auto it6 = find(s.begin(), s.end(), 'Y');
	if (it1 == s.end() && it2 == s.end() && it3 == s.end() && it4 == s.end() && it5 == s.end() && it6 == s.end()) {
		cout << n+1 << "\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y') {
			temp++;
			mx = max(temp, mx);
			temp = 0;
		} else if (i == n-1) {
			temp+=2;
			mx = max(temp, mx);
		} else {
			temp++;
		}
	}
	cout << mx << "\n";
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


