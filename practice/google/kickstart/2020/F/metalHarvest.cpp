#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
int n, k;
array<int, 2> ar[mxN];

void solve() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> ar[i][0] >> ar[i][1];
	sort(ar, ar+n);


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

