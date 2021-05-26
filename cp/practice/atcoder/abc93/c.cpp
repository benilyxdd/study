#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	vector<int> ar(3);
	for (int& x : ar) {
		cin >> x;
	}
	sort(ar.begin(), ar.end());
	int ans = 0;
	int diff = ar[2] - ar[1];
	ans += diff;
	ar[1] += diff;
	ar[0] += diff;
	int add = (ar[2] - ar[0] + 1) / 2;
	ans += add;
	ar[0] += add * 2;
	ans += (ar[0] != ar[2]);
	cout << ans;
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

