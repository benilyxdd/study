#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	cin >> b;
	int xd = v[b-1];
	sort(v.begin(), v.end());
	auto it = find(v.begin(), v.end(), xd);
	cout << distance(v.begin(), it)+1 << "\n";
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

