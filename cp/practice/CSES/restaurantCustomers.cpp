#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
vector<array<int, 2>> ar;
int a, b, n, mx, temp;

void solve() {
	cin >> n;
	while(n--) {
		cin >> a >> b;
		ar.push_back({a, 1});
		ar.push_back({b, 2});
	}
	sort(ar.begin(), ar.end());
	for (array<int, 2>& x : ar) {
		if (x[1] == 1) {
			temp++;
			mx = max(mx, temp);
		} else {
			temp--;
		}
	}
	cout << mx << "\n";
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

