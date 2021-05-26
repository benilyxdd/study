#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAX = (int)1e9+7;
const int mxN = 2005;
string ar[mxN];
int n, mxr[10], mxc[10], mnr[10], mnc[10], ans[10];

void solve() {
	memset(mxr, 0, sizeof(mxr));
	memset(mxc, 0, sizeof(mxc));
	memset(ans, 0, sizeof(ans));
	fill(mnr, mnr+10, MAX);
	fill(mnc, mnc+10, MAX);
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x = ar[i][j]-'0';
			mxr[x] = max(mxr[x], i);
			mxc[x] = max(mxc[x], j);
			mnr[x] = min(mnr[x], i);
			mnc[x] = min(mnc[x], j);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x = ar[i][j]-'0';
			ans[x] = max(ans[x], max(mxr[x]-i, i-mnr[x]) * max(n-j-1, j));	
			ans[x] = max(ans[x], max(mxc[x]-j, j-mnc[x]) * max(n-i-1, i));	
		}
	}
	
	for (int i = 0; i < 10; i++)
		cout << ans[i] << " ";
	cout << "\n";


}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

