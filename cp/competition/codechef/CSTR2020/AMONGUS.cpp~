#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1000004;
int cnt[mxN];

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		cnt[ar[i]]++;
	}
	for (int i = 0; i < n+1; i++) {
		int x;
		cin >> x;
		cnt[x]--;
	}
	for (int i = 0; i < 1000004; i++) {
		if (cnt[i] == -1) {
			cout << i << "\n";
			return;
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

