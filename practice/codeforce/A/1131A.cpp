#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int cnt = 0;
	cnt += a+1;
	cnt += b+d+2;
	if (a==c) {
		cnt += a+1;
		cnt += b+d;
	} else {
		cnt += c+d+b;
		cnt += a-c-1;
		cnt += 2;
	}
	cout << cnt << "\n";
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


