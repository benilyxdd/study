#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
array<double, 2> ar[mxN];
int n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i][0] >> ar[i][1];

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			double x = (ar[i][1]-ar[j][1])/(ar[i][0]-ar[j][0]);
			if (x <= 1 && x >= -1) {
				cnt++;
			}
		}
	}
	cout << cnt << "\n";
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

