#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 100;
int mem[mxN][mxN], call;

int f(string a, string b, int n, int m) {
	if (mem[n][m] != -1)
		return mem[n][m];
	call++;

	if (n == 0 || m == 0)
		return 0;
	
	if (a[n-1] == b[m-1]) {
		return mem[n][m] = (1 + f(a, b, n-1, m-1));
	} else {
		return mem[n][m] = (max(f(a, b, n-1, m), f(a, b, n, m-1)));
	}
}

void solve() {
	memset(mem, -1, sizeof(mem));

	string a, b;
	cin >> a >> b;
	int n = a.length(), m = b.length();

	cout << f(a, b, n, m) << " call: " << call << '\n';
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

