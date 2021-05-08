#include <bits/stdc++.h>
using namespace std;

#define ll long long

int cal(vector<int>& a, vector<int>& b) {
	int cnt = 0;
	for (int i = 0; i < 128; i++) {
		if (a[i] > 0 && b[i] > 0) {
			cnt++;
		}
	}
	return cnt;
}

void solve() {
	int n;
	string s;
	cin >> n >> s;
	vector<int> a(128, 0), b(128, 0);
	for (char& ch : s) {
		b[ch]++;
	}
	int mx = 0;
	for (int i = 0; i < n - 1; i++) {
		a[s[i]]++;
		b[s[i]]--;
		int get = cal(a, b);
		mx = max(get, mx);
	}
	cout << mx;
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

