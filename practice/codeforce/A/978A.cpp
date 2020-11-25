#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a;
	cin >> a;
	vector<int> v;
	for (int i = 0; i < a; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	vector<int> ans;
	for (int i = a-1; i >= 0; i--) {
		auto it = find(ans.begin(), ans.end(), v[i]);
		if (it == ans.end()) {
			ans.push_back(v[i]);
		}
	}
	int sz = ans.size();
	cout << sz << "\n";
	for (int i = sz-1; i >= 0; i--) {
		cout << ans[i] << " "; 
	}	
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

