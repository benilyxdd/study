#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e7;

void solve() {
	int n;
	cin >> n;
	for (int i = mxN-n+1; i < mxN+1; i++) {
		cout << i << " ";
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

