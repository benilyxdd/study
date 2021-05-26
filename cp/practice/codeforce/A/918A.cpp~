#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	string ans;
	for (int i = 0; i < n; i++) {
		ans+='o';
	}
	
	vector<int> v(100, 1);
	for (int i = 2; i < 100; i++) {
		v[i] = v[i-1] + v[i-2];
	}
	
	for (int i = 1; i <= n; i++) {
		if (find(v.begin(), v.end(), i) != v.end()) {
			ans[i-1] = 'O';
		}
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
