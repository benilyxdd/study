#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, r; cin >> n >> r;
	r += (n < 10 ? 100*(10-n) : 0);
	cout << r << "\n";
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

