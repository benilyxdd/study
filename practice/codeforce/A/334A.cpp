#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar[n+1];
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= n; j++) {
			ar[(i+j)%n].push_back(i*n+j);
		}
	}
	
	for (vector<int>& x : ar) {
		for (int& y : x) {
			cout << y << " ";
		}
		cout << "\n";
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


