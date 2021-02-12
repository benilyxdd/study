#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1e5+5;
int ar[mxN], n, x;
pair<int, int> t[mxN];

bool cmp(pair<int, int>& a, pair<int, int>& b) {
	if (a.first == b.first)
		return a.second < b.second;
	return a.first < b.first;
}

void solve() {
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		t[i] = {(ar[i]+x-1)/x, i};
	}
	
	sort(t, t+n, cmp);
	for (int i = 0; i < n; i++)
		cout << t[i].second+1 << " ";
	cout << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

