//https://www.geeksforgeeks.org/maximum-difference-zeros-ones-binary-string/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
string s;

//kadane's algorithm
void f() {
	int cur = 0, mx = 0;
	for (char& x : s) {
		if (x == '0') {
			cur++;
		} else {
			cur--;
		}

		if (cur < 0) {
			cur = 0;
		}

		mx = max(cur, mx);
	}

	cout << mx << '\n';
}

void solve() {
	cin >> s;
	f();
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

