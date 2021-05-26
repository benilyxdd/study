#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	ll b, n, sum = 0;
	cin >> n;
	vector<ll> a;
	for (int i = 0; i < n; i++) {
		cin >> b;
		sum += b;
		a.push_back(b);
	}
	sort(a.begin(), a.end());
	ll cnt = 0;
	ll xd = sum/n;
	ll left = sum%n;
	vector<ll> v;
	for (int i = 0; i < n-left; i++) {
		v.push_back(xd);
	}
	for (int i = 0; i < left; i++) {
		v.push_back(xd+1);
	}

	for (int i = 0; i < n; i++) {
		cnt += abs(v[i] - a[i]);
	}
	cout << cnt/2 << "\n";

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

