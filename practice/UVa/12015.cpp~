#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int mx = 0;
	pair<int, string> ar[10];
	for (int i = 0; i < 10; i++) {
		string a;
		int b;
		cin >> a >> b;
		ar[i].first = b;
		ar[i].second = a;
		mx = max(mx, b);
	}
	for (int i = 0; i < 10; i++) {
		if (ar[i].first == mx) {
			cout << ar[i].second << "\n";
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ":\n";
		solve();
		i++;
	}
	return 0;
}


