#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	ll n;
	cin >> n;
	vector<ll> v;
	for (int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());

	ll h = 0, w = 0;
	for (int i = 0; i < n/2; i++) {
		h += v[i];
		w += v[n-1-i];
	}
	if (n%2) {
		w += v[n-1-n/2];
	}
	cout << h*h+w*w << "\n";
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

