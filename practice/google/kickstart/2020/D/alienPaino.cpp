#include <bits/stdc++.h>
using namespace std;

const int mxN = 1e4+4;
int ar[mxN], n;

void solve() {
	int mn = mxN;
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];
	

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
