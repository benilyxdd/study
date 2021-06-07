#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
bool ar[mxN];
int n;

void f() {
	ar[0] = true;
	ar[1] = true;

	for (int i = 2; i*i < mxN; i++) {
		if (ar[i] == false) {
			for (int j = i*i; j <= mxN; j += i) {
				ar[j] = true;
			}
		}
	}

	for (int i = 0; i < mxN; i++) {
		if (ar[i] == false) {
			string s = to_string(i);
			string s2 = s;
			reverse(s.begin(), s.end());
			if (s != s2) {
				ar[i] = true;
			}
		}
	}
}

void solve() {
	cin >> n;
	cout << (ar[n] ? "No" : "Yes") << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	f();

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

