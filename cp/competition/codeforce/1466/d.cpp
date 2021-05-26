#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)1e5+5;
int ar[mxN], n;

void solve() {
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		sum += ar[i];
	}

	unordered_map<int, int> m;
	for (int i = 0; i < n-1; i++) {
		int a, b;
		cin >> a >> b;
		m[a]++;
		m[b]++;
	}

	priority_queue<int> pq;
	for (auto& x : m) {
		//cout << x.first << ": " << x.second << "\n";
		for (int i = 0; i < x.second-1; i++) 
			pq.push(ar[x.first-1]);
	}
	for (int i = 0; i < n-1; i++) {
		if (i) {
			int x = pq.top();
			sum += x;
			pq.pop();
			cout << sum << " ";
		} else {
			cout << sum << " ";
		}
	}
	cout << "\n";
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

