//https://www.geeksforgeeks.org/program-nth-catalan-number/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)100;
int ar[mxN];

void f() {
	ar[0] = 1;
	ar[1] = 1;
	for (int i = 2; i < mxN; i++) {
		for (int j = 0; j < i; j++) {
			ar[i] += ar[j]*ar[i-j-1];
		}
	}
}

void solve() {
	int n;
	cin >> n;
	cout << ar[n-1] << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	f();
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

