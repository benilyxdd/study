#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
int n, m, ar[mxN], ans[mxN];

void solve() {
	cin >> n >> m;
	for (int i = 0; i < m; i++)
		cin >> ar[i];
		
	for (int i = 0; i < m; i++) {
		for (int j = ar[i]-1; j < n; j++) {
			if (ans[j] == 0) {
				ans[j] = ar[i];
			}
		}
	}
	
	for (int i = 0; i < n; i++) 
		cout << ans[i] << " ";
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


