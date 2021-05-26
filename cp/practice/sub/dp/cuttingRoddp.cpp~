#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;
	int ar[n], mx[k+1];
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	mx[0] = 0;
	for (int i = 1; i <= k; i++) {
		mx[i] = 0;
		for (int j = 0; j < i; j++) {
			mx[i] = max(mx[i], ar[j]+mx[i-j-1]);
		}
	}
	cout << mx[k] << '\n';
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

