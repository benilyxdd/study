#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	
	for (int i = 1; i < n; i++) {
		int a = m-1-i;
		int b = m-1+i;
		if (a >= 0 && k >= v[a] && v[a] != 0) {
			cout << 10*i << "\n";
			return;
		}
		if (b < n && k >= v[b] && v[b] != 0) {
			cout << 10*i << "\n";
			return;
		}
	}
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
