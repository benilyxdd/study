#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	array<int, 2> ar[n];
	for (int i = 0; i < n; i++) {
		cin >> ar[i][1] >> ar[i][0];
	}
	sort(ar, ar+n);
	
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

