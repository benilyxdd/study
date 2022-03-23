#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	int mn = 1001;
	int x, y;
	for (int i = 0; i < n; i++) {
		if (abs(v[i] - v[i+1]) < mn) {
			mn = abs(v[i] - v[i+1]);
			x = i;
			y = i+1;
		}	
	}
	if (abs(v[0] - v.back()) < mn) {
		x = 0;
		y = n-1;
	}
	cout << x+1 << " " << y+1 << "\n";
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
