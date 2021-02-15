#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1e5+5;
int ar[mxN], n, p, pre[mxN];

void solve() {
	cin >> n >> p;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	sort(ar, ar+n, greater<int>());
	pre[0] = ar[0];
	for (int i = 1; i < n; i++) 
		pre[i] = pre[i-1]+ar[i];

	for (int i = 0; i < n; i++) {
		cout << pre[i] << " ";
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
