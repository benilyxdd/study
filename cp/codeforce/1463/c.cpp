#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int ar[mxN], ar2[mxN];

void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i] >> ar2[i];

	int cnt = 0;
	int xd = 0;

	for (int i = 0; i < n;) {
		cnt++;
		int xd2 = ar[i]+abs(ar2[i]-xd);
		xd = ar2[i];
		while(xd2 > ar[i] && i < n) {
			i++;
		}
		cout << i << " ";
	}
	cout << cnt << "\n";
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

