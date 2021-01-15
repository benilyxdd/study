#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	vector<int> x, y;
	for (int i = 0; i < a; i++) {
		int z;
		cin >> z;
		x.push_back(z);
	}
	for (int i = 0; i < b; i++) {
		int z;
		cin >> z;
		y.push_back(z);
	}

	int ans = 0;
	int j = 0;
	for (int i = 0; i < a; i++) {
		if (y[j] >= x[i] && j < b) {
			ans++;
			j++;
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
