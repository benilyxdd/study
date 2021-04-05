#include <bits/stdc++.h>
using namespace std;

#define ll long long

void tw(int a, int b, int c) {
	if (a == 1) {
		cout << b << ' ' << c << '\n';
	} else {
		tw(a-1, b, 6-c-b);
		cout << b << ' ' << c << '\n';
		tw(a-1, 6-c-b, c);
	}
}

void solve() {
	int n;
	cin >> n;
	cout << pow(2, n)-1 << '\n';
	tw(n, 1, 3);
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

