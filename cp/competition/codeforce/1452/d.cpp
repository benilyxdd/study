#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = (int)998244353;
const int MAX = 2000;
int d[MAX];

void solve() {
	int n, m, k;
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		for (int j = a-1; j < b; j++) {
			d[j]++;
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

