#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	while(n > 0) {
		int temp = n%10;
		if (temp%2 == 0) {
			cout << "1\n";
			return;
		}
		n /= 10;
	}
	cout << "0\n";
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

