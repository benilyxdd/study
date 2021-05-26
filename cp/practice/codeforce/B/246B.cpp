#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int ar[mxN], n, cnt;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		cnt += ar[i];
	}
	
	cout << (cnt%n == 0 ? n : n-1);
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

