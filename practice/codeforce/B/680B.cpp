#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int xd[a+1];
	for (int i = 1; i <= a; i++) {
		cin >> xd[i];
	}

	int cnt = 0;
	for (int i = 1; i <= a; i++) {
		if (xd[i]) {
			int yo = i-b;
			int yo2 = b-yo;
			if (yo2 < 1 || yo2 > a || xd[i] == xd[yo2]) {
				cnt++;
			}
		}
	}
	cout << cnt << "\n";
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

