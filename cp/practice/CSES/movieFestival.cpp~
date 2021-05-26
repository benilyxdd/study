#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
vector<array<int, 2>> ar;
int a, b, n;

void solve() {
	cin >> n;
	while(n--) {
		cin >> a >> b;
		ar.push_back({b, a});
	}
	sort(ar.begin(), ar.end());

	int ans = 1;
	int now = ar[0][0];
	for (array<int, 2> x : ar) {
		if (x[1] >= now) {
			ans++;
			now = x[0];
		}
	}
	cout << ans << "\n";
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

