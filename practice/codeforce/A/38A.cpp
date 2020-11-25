#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v = {0, 0};
	for (int i = 0; i < n-1; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	int a, b;
	cin >> a >> b;
	
	int ans = 0;
	for (int i = a+1; i <= b; i++) {
		ans += v[i];
	}

	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
