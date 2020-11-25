#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b;
	priority_queue<int> pq;
	for (int i = 0; i < a; i++) {
		cin >> c;
		pq.push(c);
	}

	int ans = 0;
	while(b > 0 && pq.top() > 0) {
		int attack = pq.top();
		b -= attack;
		pq.pop();
		pq.push(attack/2);
		ans ++;
	}
	cout << (b > 0 ? "Evacuate" : to_string(ans)) << "\n";
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

