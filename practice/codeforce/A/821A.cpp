#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 51;
int ar[mxN][mxN], n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> ar[i][j];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x = ar[i][j];
			
		}
	}
	cout << "NO\n";
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
