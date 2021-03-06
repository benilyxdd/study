#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	vector<int> ans;
	for (int i = b+1; i <= a; i++) {
		ans.push_back(i);
	}
	if (b%2 == 0){
		ans.push_back(b/2);
	}
	int x = b/2+1;
	for (int i = x; i < b; i++) {
		ans.push_back(i);
	}

	cout << ans.size() << '\n';
	for (int& x : ans) {
		cout << x << ' ';
	}
	cout << '\n';
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

