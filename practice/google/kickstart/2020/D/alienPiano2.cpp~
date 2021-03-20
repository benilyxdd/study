#include <bits/stdc++.h>
using namespace std;

#define ll long long 
const int mxN = (int)1e4+4;

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	
	int ans = 0;
	for (int i = 1; i < n; i++) {
		if (ar[i] > ar[i-1]) {
			int x = 0;
			while(ar[i] > ar[i-1]) {
				i++, x++;
			}
			ans += x/4;
		} else if (ar[i] < ar[i-1]) {
			int x = 0;
			while(ar[i] < ar[i-1]) {
				i++, x++;
			}
			ans += x/4;
		}
	}
	cout << ans << '\n';
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

