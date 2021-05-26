#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll fuc(int n) {
	vector<ll> ans;
	ans.push_back(2);
	ans.push_back(1);
	for (int i = 2; i < n+1; i++) {
		ll a = ans[i-1]+ans[i-2];
		ans.push_back(a);
	}
	return ans[n];
}

void solve() {
	int n;
	cin >> n;
	cout << fuc(n) << "\n";
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

