#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)1e4;
vector<int> diff;
priority_queue<int, vector<int>, greater<>> a;
priority_queue<int> b;
int n, m, k;

void clear() {
	while(!a.empty()) {
		a.pop();
	}
	while(!b.empty()) {
		b.pop();
	}
}

void solve() {
	diff.clear();
	clear();
	cin >> n >> m;
	int as = 0, bs = 0;
	for (int i = 0; i < n; i++) {
		cin >> k;
		as += k;
		a.push(k);
	}
	for (int i = 0; i < m; i++) {
		cin >> k;
		bs += k;
		b.push(k);
	}

	diff.push_back(0);
	for (int i = 1; i <= min(n, m); i++) {
		int yo = b.top()-a.top();
		if (yo <= 0) {
			break;
		} else {
			diff.push_back(yo*2+diff[i-1]);
		}
		b.pop();
		a.pop();
	}
	diff.push_back(1e18);
	/*
	for (int& x : diff) {
		cout << x << " ";
	}
	cout << "\n";
	*/
	if (as > bs) {
		cout << "0\n";
		return;
	}
	auto x = upper_bound(diff.begin(), diff.end(), bs-as);
	int len = x-diff.begin();
	int yo = *x;
	cout << (yo == 1e18 ? -1 : len) << "\n"; 
}

signed main() {
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

