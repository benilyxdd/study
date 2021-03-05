//https://www.geeksforgeeks.org/tiling-problem/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e3;
int ar[mxN], n;

void f() {
	ar[0] = 0;
	ar[1] = 1;
	for (int i = 2; i < mxN; i++) 
		ar[i] = ar[i-1]+ar[i-2];
}

void solve() {
	cin >> n;
	cout << ar[n] << '\n';
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

