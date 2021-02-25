#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
int ar[mxN][mxN], n, m, d;
//bool same = true
bool del = true;

void solve() {
	cin >> n >> m >> d;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> ar[i][j];

	vector<int> v;
	//int last = ar[0][0];
	int mod = ar[0][0]%d;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			v.push_back(ar[i][j]);
			//if (ar[i][j] != last) {
				//same = false;
			//}
			if (ar[i][j]%d != mod) {
				del = false;
			}
		}
	}

	//if (same) {
		//cout << 0;
		//return;
	//} else if (!same && !del) {
		//cout << -1;
		//return;
	//}
	if (!del) {
		cout << -1;
		return;
	}
	
	//for (int i = 0; i < n; i++)
		//for (int j = 0; j < m; j++)
			//v.push_back(ar[i][j]);
	sort(v.begin(), v.end());

	int mid = v[n*m/2];
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int x = abs(ar[i][j]-mid);
			ans += x/d;
		}
	}
	cout << ans;
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

