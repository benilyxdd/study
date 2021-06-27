#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	vector<array<int, 2>> bucket(3, array<int, 2>());
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> bucket[i][j];
		}
	}

	for (int i = 0; i < 100; i++) {
		int pour = i % 3;
		int target = (i + 1) % 3;

		int max_pour = min(bucket[pour][1], bucket[target][0] - bucket[target][1]);
		bucket[pour][1] -= max_pour;
		bucket[target][1] += max_pour;
	}

	for (int i = 0; i < 3; i++) {
		cout << bucket[i][1] << '\n';
	}
}

int main() {
	freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);
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

