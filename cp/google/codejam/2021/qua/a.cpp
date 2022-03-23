#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		int j = i;
		while(ar[j] != i+1 && j < n) {
			j++;
		}
		reverse(ar.begin()+i, ar.begin()+j+1);
		ans += j-i+1;
	}
	cout << ans-1 << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("t3.txt", "r", stdin);
	//freopen("ans.txt", "w", stdout);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

