#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int a;
	vector<int> v;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	int ans = 0, pos = 1;
	for (int i = 0; i < n; i++) {
		if(v[i] >= pos) {
			ans++;
			pos++;
		}
	}
	cout << pos-1 << "\n";
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

