#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e6+6;
int ar[mxN], n, k;
int cnt[mxN];

void solve() {
	cin >> n >> k;
	set<int> s;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		cnt[ar[i]]++;
	}

	for (int i = 0; i < mxN; i++) 
		if (cnt[i] > k) 
			cout << i << " ";
	cout << "\n";
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

