#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}
	int mx = 2, diff = ar[1] - ar[0], temp = 1;
	for (int i = 1; i < n; i++) {
		int cur = ar[i] - ar[i - 1];
		if (diff != cur) {
			temp = 1;
			diff = cur;
		}
		bool chance = true;
		vector<int> save = {-1, -1};
		while ((ar[i] - ar[i - 1] == diff || chance) && i < n) {
			if (ar[i] - ar[i - 1] != diff && chance) {
				chance = false;
				save = {ar[i], i};
				ar[i] = ar[i - 1] - diff;
			}
			temp++, i++;
		}
		mx = max(mx, temp);
		if (save[1] != -1) {
			i = save[1];
			ar[save[1]] = save[0];
		}
	}
	cout << mx << '\n';
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

