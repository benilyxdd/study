#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
		sum += a;
	}
	int a, b;
	cin >> a >> b;
	
	int ans = 0;
	for (int i = min(a-1, b-1) ;i < max(a-1, b-1); i++) {
		ans += v[i];
	}
	cout << min(ans, sum - ans);

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
