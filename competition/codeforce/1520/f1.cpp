#include <bits/stdc++.h>
using namespace std;

int ask(int l, int r) {
	cout << "? " << l << ' ' << r << endl;

	int res;
	cin >> res;
	return r - l + 1 - res;
}

int main() {
	int n, t;
	cin >> n >> t;
	assert(t == 1);

	for (int i = 0; i < t; i++) {
		int k;
		cin >> k;
		int lo = 0, hi = n - 1;
		while (lo < hi) {
			int mid = lo + (hi - lo + 1) / 2;
			int get = ask(1, mid);
			if (get < k) {
				lo = mid;
			} else {
				hi = mid - 1;
			}
		}
		cout << "! " << lo + 1 << endl;
		exit(0);
	}
}
