#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, h = 0, l = 0;
	cin >> n;
	int ar[n];
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		if (i) {
			if (ar[i] > ar[i-1])
				h++;
			else if (ar[i] < ar[i-1])
				l++;
		}
	}
	cout << h << " " << l << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case " << i << ": ";
		solve();
		i++;
	}
	return 0;
}


