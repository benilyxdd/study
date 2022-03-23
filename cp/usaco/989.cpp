#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int k, n;
	cin >> k >> n;
	vector<int> ar(n);
	for (int &x : ar) {
		cin >> x;
	}

	auto fun = [&k](int hey) {
		vector<int> dist(2, 0);
		int time = 0;
		for (int j = 1;; j++) {
			dist[0] += j;
			time++;
			if (dist[0] + dist[1] >= k) {
				cout << time << '\n';
				return;
			}
			
			if (j >= hey) {
				dist[1] += j;
				time++;
				if (dist[0] + dist[1] >= k) {
					cout << time << '\n';
					return;
				}
			}
		}
	};

	for (int i = 0; i < n; i++) {
		fun(ar[i]);
	}
}

int main() {
	freopen("race.in", "r", stdin);
	freopen("race.out", "w", stdout);
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

