#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<pair<int, string>> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i].second;
		cin >> ar[i].first;
	}
	sort(ar.rbegin(), ar.rend());
	cout << ar[1].second;
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

