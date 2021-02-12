#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1e5+5;
int n;
pair<int, int> ar[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ar[i].first >> ar[i].second;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

