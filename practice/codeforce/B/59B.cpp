#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
int ar[mxN], n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];

	int cnt = 0;
	vector<int> odd;
	for (int i = 0; i < n; i++) {
		if (ar[i]&1) {
			cnt++;
			odd.push_back(ar[i]);
		}
	}
	if (cnt == 0) {
		cout << 0;
	} else {
		int ans = 0;
		for (int i = 0; i < n; i++) {
			if (ar[i]%2 == 0) {
				ans += ar[i];
			}
		}
		sort(odd.rbegin(), odd.rend());
		int times = (cnt&1 ? cnt : cnt-1);
		for (int i = 0; i < times; i++) {
			ans += odd[i];
		}
		cout << ans;
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

