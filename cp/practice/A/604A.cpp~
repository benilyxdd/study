#include <bits/stdc++.h>
using namespace std;

#define ll long long
int a[5], b[5], c[2];
int sc[5] = {500, 1000, 1500, 2000, 2500};

void solve() {
	for (int i = 0; i < 5; i++)
		cin >> a[i];
	for (int i = 0; i < 5; i++)
		cin >> b[i];
	cin >> c[0] >> c[1];

	int fin = c[0]*100-c[1]*50;
	for (int i = 0; i < 5; i++) {
		fin += max(sc[i]/10*3, sc[i]-sc[i]*a[i]/250-50*b[i]);
	}
	cout << fin;
}

signed main() {
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


