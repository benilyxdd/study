#include <bits/stdc++.h>
using namespace std;

int ask(int l, int r) {
	cout << "? " << l << ' ' << r << endl;

	int res;
	cin >> res;
	return res;
}

int main() {
	int n, t, k;
	cin >> n >> t >> k;
	assert(t == 1);
	int lo = 1, hi = n, pre = 0;
	bool ok = false;
	while (lo < hi) {
		int mid = lo + (hi - lo) / 2;
		int get = ask(lo, mid);
		int zero = mid - lo - get + 1;
		pre += zero;

		if (!ok) {
			if (pre < k) {
				lo = mid + 1;
			} else {
				hi = mid;
			}
		}
		if (pre == k) {
			ok = true;
			break;
		}
	}

	int pre2 = 0;
	while (lo < hi) {
		int mid = lo + (hi - lo) / 2;
		int get = ask(lo, mid);
		int zero = mid - lo - get + 1;

		int yo = pre - zero;
		if (yo < k) {
			lo = mid + 1;
		} else {
			hi = mid;
		}
	}
	cout << "! " << lo << endl;

	exit(0);
}
