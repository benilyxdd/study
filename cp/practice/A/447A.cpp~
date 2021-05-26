#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 302;
bool ar[mxN];
int p, n;

void solve() {
	cin >> p >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		int temp = a%p;
		if (ar[temp] == 0) {
			ar[temp] = 1;
		} else {
			cout << i+1;
			return;
		}
	}
	cout << -1;
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
