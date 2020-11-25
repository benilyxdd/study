#include <bits/stdc++.h>

using namespace std;

#define ll long long

int f[42];
int s[42];

void stackup() {
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i < 42; i++) {
		f[i] = f[i-1]+f[i-2];
	}
}

void xd() {
	s[0] = 0;
	for (int i = 1; i < 42; i++) {
		s[i] = s[i-1] + f[i];
	}
}

void solve() {
	stackup();
	xd();
	int n;
	cin >> n;
	cout << s[n];
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

