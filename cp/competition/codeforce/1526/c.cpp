#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int &x : ar) {
		cin >> x;
	}

	priority_queue<int, vector<int>, greater<int>> pq;
	ll now = 0;
	for (int &x : ar) {
		now += x;
		pq.push(x);
		while (now < 0 && !pq.empty()) {
			int top = pq.top();
			now -= top;
			pq.pop();
		}
	}
	cout << pq.size() << '\n';
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

