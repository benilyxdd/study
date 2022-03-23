#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, q;
	cin >> n >> q;
	int c[n];
	for (int i = 0; i < n; i++) 
		cin >> c[i];
	while(q--) {
		int a, b;
		cin >> a >> b;
		cout << *min_element(c+a-1, c+b) << "\n";
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

