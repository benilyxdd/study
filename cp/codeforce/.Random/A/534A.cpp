#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	if (n == 4) {
		cout << "4\n3 1 4 2";
		return;
	}
	if (n == 3) {
		cout << "2\n1 3\n";
	} else if (n == 2) {
		cout << "1\n1";
	} else {
		cout << n << "\n";
		for (int i = 1; i <= n; i+=2) {
			cout << i << " ";
		}
		for (int i = 2; i <= n; i+=2) {
			cout << i << " ";
		}
	}
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


