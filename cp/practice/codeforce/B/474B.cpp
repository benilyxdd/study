#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, n, xd;
	cin >> n;
	vector<int> v;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		sum += a;
		v.push_back(sum);
	}
	cin >> xd;
	for (int i = 0; i < xd; i++) {
		cin >> a;
		auto it = lower_bound(v.begin(), v.end(), a);
		int dis = distance(v.begin(), it);
		cout << dis+1 << "\n";
	}
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

