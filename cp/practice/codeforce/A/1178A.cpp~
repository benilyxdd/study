#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	int all = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
		all += a;
	}
	int sum = v[0];
	vector<int> ans;
	ans.push_back(1);
	for (int i = 1; i < n; i++) {
		if (v[i]*2 <= v[0]) {
			sum += v[i];
			ans.push_back(i+1);
		}
	}
	if (sum*2 <= all) {
		cout << 0 << "\n";
		return;
	}
	cout << ans.size() << "\n";
	for (int a : ans) {
		cout << a << " ";
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
