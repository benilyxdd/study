#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 100;
int ar[mxN], n, lis[mxN], lds[mxN];

void debug() {
	cout << "lis: \n";
	for (int i = 0; i < n; i++) {
		cout << lis[i] << ' ';
	}
	cout << '\n';

	cout << "lds: \n";
	for (int i = 0; i < n; i++) {
		cout << lds[i] << ' ';
	}
	cout << '\n';
}

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	//lis
	lis[0] = 1;
	for (int i = 1; i < n; i++) {
		lis[i] = 1;
		for (int j = 0; j < i; j++) {
			if (ar[i] > ar[j]) {
				lis[i] = max(lis[i], lis[j]+1);
			}
		}
	}

	//lds
	lds[n-1] = 1;
	for (int i = n-2; i >= 0; i--) {
		lds[i] = 1;
		for (int j = n-1; j > i; j--) {
			if (ar[i] > ar[j]) {
				lds[i] = max(lds[i], lds[j]+1);
			}
		}
	}
	

	//debug();
	int ans = 1, pos = -1;
	for (int i = 0; i < n; i++) {
		int x = lis[i]+lds[i]-1;
		if (x > ans) {
			ans = x;
			pos = i;
		}
	}
	cout << ans << /*" at " << pos <<*/'\n';

	int f = 1;
	for (int i = 0; i < pos; i++) {
		if (lis[i] == f) {
			cout << ar[i] << ' ';
			f++;
		}
	}

	for (int i = pos, l = ans-f+1; i < n; i++) {
		if (lds[i] == l) {
			cout << ar[i] << ' ';
			l--;
		}
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

