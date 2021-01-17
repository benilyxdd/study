#include <bits/stdc++.h>
using namespace std;

#define ll long long
int ar[4] = {4, 2, 5, 3}, n;
void p(int a) {
	for (int i = 0; i < n/4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << ar[j]-a << " ";
		}
		for (int j = 0; j < 4; j++) {
			ar[j] += 4;
		}
	}
}

void solve() {
	cin >> n;
	if (n == 1) {
		cout << 1;
	} else if (n == 2 || n == 3) {
		cout << "NO SOLUTION\n";
	} else if (n == 4) {
		cout << "3 1 4 2";
	} else {
		int left = n%4;
		if (left == 0) {
			p(1);
		} else {
			p(0);
		}
		if (left == 1) {
			cout << 1;
		} else if (left == 2) {
			cout << "1 " << n;
		} else if (left == 3) {
			cout << n-1 << " 1 " << n;
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

