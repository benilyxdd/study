#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	vector<int> v;
	for(int i = 0; i < a; i++) {
		int c;
		cin >> c;
		v.push_back(c);
	}

	int mx = *max_element(v.begin(), v.end());
	for (int j = 1; j < (mx+b-1)/b+1; j++) {
		for (int i = 0; i < a; i++) {
			if (v[i] <= j*b && v[i] > (j-1)*b) {
				cout << i+1 << " ";
			}
		}
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

