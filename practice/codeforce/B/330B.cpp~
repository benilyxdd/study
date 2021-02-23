#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e3+3;
vector<int> ar[mxN];
int n, m;

void solve() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		ar[a].push_back(b);
		ar[b].push_back(a);
	}

	int pos = -1;
	for (int i = 1; i <= n; i++) {
		if (ar[i].size() == 0) {
			pos = i;
			break;
		}
	}

	cout << n-1 << '\n';
	for (int i = 1; i <= n; i++) {
		if (pos == i) {
			continue;
		} else {
			cout << pos << " " << i << '\n';
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

