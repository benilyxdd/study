#include <bits/stdc++.h>
using namespace std;

#define ll long long
int d, c, a[3], b[3];

void solve() {
	cin >> d >> c;
	for (int i = 0; i < 3; i++)
		cin >> a[i];
	for (int i = 0; i < 3; i++)
		cin >> b[i];

	int t1 = a[0]+a[1]+a[2], t2 = b[0]+b[1]+b[2];
	int f = 2*d;
	int l = 0;
	if (t1 < 150) {
		l += d;
	}
	if (t2 < 150) {
		l += d;
	}
	l += c;
	cout << (l < f ? "YES" : "NO") << '\n';
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

