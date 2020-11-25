#include <bits/stdc++.h>
using namespace std;

#define ll long long

int pre[100005], suf[100005], ar[100001];

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}

void solve() {
	int n, q; cin >> n >> q;
	pre[0] = suf[n+1] = 0;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		pre[i] = gcd(pre[i-1], ar[i]);
	}

	for (int i = n; i >= 1; i--) suf[i] = gcd(ar[i], suf[i+1]);

	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		cout << gcd(pre[a-1], suf[b+1]) << "\n";
	}
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

