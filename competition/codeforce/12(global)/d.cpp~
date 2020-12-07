#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)3e5+5;
int n, ar[mxN];

bool f(int x) {
	for (int i = 1; i <= x; i++) {
		if (ar[-1+i] != i || ar[n-i+1] != i)
			return false;
	}
	return true;
}

void solve() {
	//input
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	
	//print
	for (int i = 1; i < n; i++) {
		cout << (f(i) ? 1 : 0);	
	}
	cout << (*min_element(ar, ar+n) == 1 ? 1 : 0) << "\n";
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

