#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)1e5+5;
int ar[mxN], n, k;
bool ok[mxN];

void solve() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	
	int cnt = 0;
	int i = n/2-1, j = n/2;
	priority_queue<int> q;
	if (n&1)
		i = n/2;
	for (; i >= 0; i--, j++) {
		q.push(ar[i]);
		if (i != j)
			q.push(ar[j]);

		cnt += q.top();
		q.pop();
	}
	if (cnt >= k) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
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

