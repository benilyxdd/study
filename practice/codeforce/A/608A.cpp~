#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1009;
int n, s, ar[mxN];

void solve() {
	cin >> n >> s;
	vector<array<int, 2>> v;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		ar[a] = max(ar[a], b);
	}
	int t = 0;
	for (int i = s; i > 0; i--, t++) {
		if (ar[i] > t) {
			t += ar[i]-t;	
		}
	}
	cout << t;
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


