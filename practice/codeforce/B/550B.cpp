#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 16;
int ar[mxN];

void solve() {
	int n, l, r, x;
	cin >> n >> l >> r >> x;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	int ok = 0;
	for (int i = 1; i < (1 << n); i++) {
		vector<int> temp;
		for (int j = 0; j < n; j++) {
			if (i & (1 << j)) {
				temp.push_back(ar[j]);
			}
		}
		sort(temp.begin(), temp.end());

		bool go = 1;
		if (temp.back()-temp.front() < x) {
			go = 0;
		}
		int total = 0;
		for (int& y : temp) {
			total += y;
		}
		if (total > r || total < l) {
			go = 0;
		}
		ok += go;
	}
	cout << ok;
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

