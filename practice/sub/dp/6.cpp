#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1000;
int fib[mxN];

void f() {
	fib[0] = 1;
	fib[1] = 1;
	for (int i = 2; i < mxN; i++) 
		fib[i] = fib[i-1]+fib[i-2];
}

void solve() {
	f();
	int n;
	cin >> n;
	cout << fib[n] << "\n";
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

