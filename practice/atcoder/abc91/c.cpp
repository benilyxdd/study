#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, a, b;
	cin >> n;
	vector<array<int, 3>> red, blue;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		red.push_back({a, b, 0});
	}
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		blue.push_back({a, b, 0});
	}
	sort(red.begin(), red.end());
	sort(blue.begin(), blue.end());

	int cnt = 0;
	for (array<int, 3>& ar : red) {
		for (array<int, 3>& ar2 : blue) {
			if (ar[0] < ar2[0] && ar[1] < ar2[1] && ar2[2] == 0) {
				ar2[0] = 1;
				cnt++;
				break;
			}
		}
	}	
	cout << cnt;
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

