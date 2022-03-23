#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;

	vector<int> cnt(26, 0), cnt2(26, 0);
	for (char& ch : s) {
		cnt2[ch - 'a']++;
	}

	auto check = [&](vector<int> &a, vector<int> &b) {
		int cnt = 0;
		for (int i = 0; i < 26; i++) {
			if (a[i] > 0 && b[i] > 0) {
				cnt++;
			}
		}
		return cnt;
	};

	int mx = 0;
	for (int i = 0; i < n - 1; i++) {
		cnt[s[i] - 'a']++;
		cnt2[s[i] - 'a']--;
		mx = max(mx, check(cnt, cnt2));
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

