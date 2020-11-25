#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	int cnt = 0;
	vector<int> v;
	int c;
	for (int i = 0; i < a; i++) {
		cin >> c;
		v.push_back(c);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < a; i++) {
		if (b >= v[i]) {
			cnt++;
			b-=v[i];
		} else {
			break;
		}
	}
	cout << cnt << "\n";
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
