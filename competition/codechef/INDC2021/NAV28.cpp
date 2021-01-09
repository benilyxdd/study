#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
int n, m;

void solve() {
	vector<set<int>> v;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		bool ok = false;
		set<int>& ref;
		for (vector<int>& x : v) {
			if (x.count(a) == 1) {
				ok = true;
				ref = &x;
				break;
			}
			if (x.count(b) == 1) {
				ok = true;
				ref = &x;
				break;
			}
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

