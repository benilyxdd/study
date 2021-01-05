#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
int ar[mxN], n;

void solve() {
	cin >> n;
	priority_queue<int> pq;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		pq.push(ar[i]);
	}
	ll a = 0, b = 0;
	for (int i = 0; i < n; i++) {
		int x = pq.top();
		if (i&1) {
			if (x&1) {
				b += x;
			}
		} else {
			if (x%2 == 0) {
				a += x;
			}
		}
		pq.pop();
	}
	if (a > b) {
		cout << "Alice\n";
	} else if (a == b) {
		cout << "Tie\n";
	} else {
		cout << "Bob\n";
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

