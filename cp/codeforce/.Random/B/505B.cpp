#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 108;
int n, m, q;
set<int> ar[mxN];
vector<int> col[mxN];

void solve() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		col[c].push_back(a);
		col[c].push_back(b);
	}

	for (int i = 0; i < mxN; i++) {
		for (int& x : col[i]) {
			ar[x].insert(i);
		}
	}
	
	cin >> q;
	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;

		set<int> s;
		set_intersection(ar[a].begin(), ar[a].end(), ar[b].begin(), ar[b].end(), inserter(s, s.begin()));
		cout << s.size() << "\n";
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

