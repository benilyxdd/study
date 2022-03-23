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
	vector<int> sort_ar(ar.begin(), ar.end());
	sort(sort_ar.begin(), sort_ar.end());
	array<int, 2> mid = {sort_ar[n / 2], sort_ar[n / 2 - 1]};
	double median = (double)(mid[0] + mid[1]) / 2.0;
	for (int i = 0; i < n; i++) {
		if (ar[i] > median) {
			cout << mid[1] << '\n';
		} else {
			cout << mid[0] << '\n';
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

