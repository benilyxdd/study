#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool x[100001];
int c[100002];

void prime(int n) {
	fill(x, x+n+1, true);
	for (int i = 2; i <= sqrt(n); i++) {
		if (x[i] == true) {
			for (int j = i*i; j <= n; j+=i) {
				x[j] = false;
			}
		}
	}
}

void xd() {
	for (int i = 3; i <= 100000; i+=2) {
		if (x[i] && x[(i+1)/2]) {
			c[i]++;
		}
	}
	for (int i = 3; i <= 100000; i++) {
		c[i] += c[i-1];
	}
}

void solve() {
	int a, b;
	cin >> a >> b;
	cout << c[b] - c[a-1] << "\n";
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	prime(100001);
	xd();
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

