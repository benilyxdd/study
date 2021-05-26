#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b;
	vector<int> v;
	int cnt = 0;
	for (int i = 0; i < a; i++) {
		cin >> c;
		v.push_back(c);
	}
	int j = 1;
	sort(v.begin(), v.end());
	for (int i = 0; i < a; i++) {
		auto it = upper_bound(v.begin(), v.end(), v[i]);
		cnt += distance(it, v.end());
	}
	cout << cnt << "\n";
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

