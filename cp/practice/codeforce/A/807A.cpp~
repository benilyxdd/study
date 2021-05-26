#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (a == b) {
			v.push_back({a,b});
		} else {
			cout << "rated\n";
			return;
		}
	}
	for (int i = 0; i < n-1; i++) {
		if (v[i].first < v[i+1].first) {
			cout << "unrated\n";
			return;
		}
	}
	cout << "maybe\n";
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


