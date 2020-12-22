#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = n; i >= 1; i--) {
		a[i-1] = i;
	}
	if (n%2) {
		int x = a[n/2-1];
		a[n/2-1] = a[n/2];
		a[n/2] = x;
	}
	reverse(a, a+n);
	for (int i = 0; i < n; i++) 
		cout << a[i] << " ";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

