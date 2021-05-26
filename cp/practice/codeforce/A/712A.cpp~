#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	vector<int> ans;
	for (int i = n-1; i >= 0; i--) {
		if (i == n-1) {
			ans.push_back(v[i]);
		} else {
			int temp = v[i] + v[i+1];
			ans.push_back(temp);
		}
	}
	reverse(ans.begin(), ans.end());
	
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
