#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	vector<double> v;
	for (int i = 0; i < a; i++) {
		double x;
		cin >> x;
		v.push_back(ceil(x/(double)b));
	}
	
	int n = *max_element(v.begin(), v.end());
	for (int i = a-1; i >= 0; i--) {
		if (v[i] == n) {
			cout << i+1 << "\n";
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
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

