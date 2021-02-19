#include <bits/stdc++.h>
using namespace std;

#define ll long long

int fact(int n) {
	if (n == 1)
		return n;

	return n*fact(n-1);
}

void solve() {
	int n;
	cin >> n;
	cout << fact(n);
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

