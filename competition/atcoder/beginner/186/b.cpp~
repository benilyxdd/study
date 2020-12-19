#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int cnt = 0;
	int ar[a][b];
	int mn = 101;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> ar[i][j];
			mn = min(ar[i][j], mn);
		}
	}
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++) 
			cnt += ar[i][j]-mn;
	cout << cnt;
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

