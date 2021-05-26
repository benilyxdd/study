#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
int ar[mxN][mxN], n, m;
bool ok[mxN][mxN];

void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < m; j++)
			cin >> ar[i][j];
	

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

