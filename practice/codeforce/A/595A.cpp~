#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	vector<int> v;
	for (int i = 0; i < a*b*2; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	int ans = 0;
	for (int i = 0; i < v.size(); i+=2) {
		if (v[i] == 1 || v[i+1] == 1) {
			ans++;
		}
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
