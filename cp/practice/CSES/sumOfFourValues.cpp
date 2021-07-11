#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m;
	cin >> n >> m;
	vector<array<int, 2>> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i][0];
		ar[i][1] = i + 1;
	}
	sort(ar.begin(), ar.end());
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int l = 0, r = n - 1, target = m - ar[i][0] - ar[j][0];
			while (l != r) {
				int temp = ar[l][0] + ar[r][0];
				if (l != i && l != j && r != i && r != j && temp == target) {
					cout << ar[i][1] << ' ' << ar[j][1] << ' ' << ar[r][1] << ' ' << ar[l][1] << '\n';
					return;
				}
				if (temp < target) {
					l++;
				} else {
					r--;
				}
			}
		}
	}
	cout << "IMPOSSIBLE\n";
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

