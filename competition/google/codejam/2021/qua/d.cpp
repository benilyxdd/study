#include <bits/stdc++.h>
using namespace std;

int n, q;

int ask(int a, int b, int c) {
	cout << (a+1) << ' ' << (b+1) << ' ' << (c+1) << endl;
	int res;
	cin >> res;
	if (res == -1) exit(0);
	return (res-1);
}

void solve() {
	vector<int> ans = {0, 1};
	for (int i = 2; i < n; i++) {
		int low = 0, high = i;
		bool done = false;
		while(low + 1 < high) {
			int mid = (low + high) >> 1;
			int res = ask(ans[mid], ans[mid-1], i);

			if (res == i) {
				ans.insert(ans.begin() + mid, i);
				done = true;
				break;
			}
			
			if (res == ans[mid-1]) {
				high = mid-1;
			} else {
				low = mid+1;
			}
		}
		if (!done) {
			if (low < high) {
				if (low < i - 1) {
					int res = ask(ans[low], ans[low+1], i);
					if (res == i) {
						low++;
					}
				} else {
					int res = ask(ans[i-1], ans[i-2], i);
					if (res != i) {
						low++;
					}
				}
			}
			ans.insert(ans.begin() + low, i);
		}
	}

	for (int i = 0; i < n; i++) {
		cout << ans[i]+1 << ' ';
	}
	cout << endl;

	int ok;
	cin >> ok;
	if (ok == -1) {
		exit(0);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t >> n >> q;
	while(t--) {
		solve();
	}
	return 0;
}
