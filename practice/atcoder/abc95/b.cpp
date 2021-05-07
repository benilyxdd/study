#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, x;
	cin >> n >> x;
	vector<int> ar(n);
	for (int& z : ar) {
		cin >> z;
		x -= z;
	}
	sort(ar.begin(), ar.end());

	int cnt = n;
	cnt += (x / ar[0]);
	cout << cnt;
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

