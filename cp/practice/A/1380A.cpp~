#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a;
	cin >> a;
	vector<int> v;
	for (int i = 0; i < a; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	for (int i = 1; i < a-1; i++) {
		if (v[i-1] < v[i] && v[i] > v[i+1]) {
			cout << "YES\n";
			cout << i << " " << i+1 << " "<< i+2 << "\n";
			return;
		}
	}
	cout << "NO\n";
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


