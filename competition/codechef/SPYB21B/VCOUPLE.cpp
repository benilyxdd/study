#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> girl(n), boy(n);
	for (int& x : boy) {
		cin >> x;
	}
	for (int& x : girl) {
		cin >> x;
	}

	sort(boy.begin(), boy.end());
	sort(girl.rbegin(), girl.rend());

	int mx = 0;
	for (int i = 0; i < n; i++) {
		mx = max(mx, boy[i] + girl[i]);
	}
	cout << mx << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

