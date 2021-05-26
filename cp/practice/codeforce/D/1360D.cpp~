#include <bits/stdc++.h>
using namespace std;

#define ll long long

int aa(int a, int b) {
	int res = 1;
	for (int i = 1; i*i<=a && i<=b; i++) {
		if (a%i == 0) {
			res = max(res, i);
			int x = a/i;
			if (x <= b) {
				return x;
			}	
		}
	}
	return res;
}

void solve() {
	int a, b; cin >> a >> b;
	cout << a/aa(a, b) << "\n";
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


