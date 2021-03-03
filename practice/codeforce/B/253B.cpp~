#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);

	for (int i = 0; i < n; i++)
		cin >> ar[i];
	sort(ar.begin(), ar.end());

	int mn = (int)1e8;
	for (int i = 0; i < n; i++) {
		//let ar[i] == min value
		auto it = upper_bound(ar.rbegin(), ar.rend(), ar[i], greater<int>());
		auto it2 = upper_bound(ar.begin(), ar.end(), ar[i]*2);
		
		int x = 0, y =0;
		if (it != ar.rend()) {
			x = ar.rend()-it;
		}
		if (it2 != ar.end()) {
			y = ar.end()-it2;
		}
		
		mn = min(mn, x+y);

		//let ar[i] == max value
		int half = (ar[i]+2-1)/2;
		auto it3 = upper_bound(ar.rbegin(), ar.rend(), half, greater<int>());
		auto it4 = upper_bound(ar.begin(), ar.end(), ar[i]);

		int x2 = 0, y2 = 0;
		if (it3 != ar.rend()) {
			x2 = ar.rend()-it3;
		}
		if (it4 != ar.end()) {
			y2 = ar.end()-it4;
		}
		mn = min(mn, x2+y2);
	}
	cout << mn;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

