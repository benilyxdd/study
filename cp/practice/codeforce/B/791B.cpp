#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 150005;
vector<int> ar[mxN];
int n, m, a, b;

void solve() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		ar[a].push_back(b);
		ar[b].push_back(a);
	}

	bool ok = false;

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

