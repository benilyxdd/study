#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int cnt = 0, temp = 0;
	for(int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (a == b) {
			temp++;
			cnt = max(temp, cnt);
		} else {
			temp = 0;
		}
	}
	cout << (cnt > 2 ? "Yes\n" : "No\n");
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

