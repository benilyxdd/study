#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int a, b, c;
	int ra = 0, rb = 0, rc = 0;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		int step = abs(rb-b) + abs(rc-c);
		int timediff = a - ra;
		if ((timediff-step)%2 == 1 || timediff < step) {
			cout << "No\n";
			return;
		}
		ra = a;
		rb = b;
		rc = c;
	}
	cout << "Yes\n";
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

