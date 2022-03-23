#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
queue<int> q;
priority_queue<pair<int, int>> q2;
int qr;
int ser;

void solve() {
	int n;
	cin >> n;
	for (int i = 0, j = 0; i < n; i++) {
		cin >> qr;
		if (qr == 1) {
			j++;
			int m;
			cin >> m;
			q.push(j);
			q2.push({m, j});
		} else if (qr == 2) {
			int x = q.front();
			while(x <= ser && !q.empty()) {
				q.pop();
				x = q.front();
			}
			q.pop();
			ser = x;
			cout << x << " ";
		} else {
			pair<int, int> x = q2.top();
			while(x.second <= ser && !q2.empty()) {
				q2.pop();
				x = q2.top();
			}
			q2.pop();
			ser = x.second;
			cout << x.second << " ";
		}
	}
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

