#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int n, ar[mxN];
map<int, int> m;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
	return a.second > b.second;
}

int f() {
	vector<pair<int, int>> a;

	for (auto& it : m) 
		a.push_back(it);

	sort(a.begin(), a.end(), cmp);

	return a[0].second;
}

void solve() {
	m.clear();
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		m[ar[i]]++;
	}
	int x = (n&1 ? n/2+1 : n/2);
	if (f() > x) {
		cout << -1 << "\n";
	} else {
		
	}
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

