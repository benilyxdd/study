#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(int n) {
	if (n == 1)
		return false;
	for (int i = 2; i*i <= n; i++)
		if (n%i == 0)
			return false;
	return true;
}

void solve() {
	ll n;
	cin >> n;
	ll k = n;

	set<ll> s;
	unordered_map<int, int> m;
	for (int i = 2; i*i <= n; i++) {
		if (n%i == 0) {
			s.insert(i);
			while(n%i == 0) {
				m[i]++;
				n /= i;
			}
		}
	}
	if (isPrime(n) && k != n) {
		m[n]++;
	

	ll a = 1, b = 0;
	s.insert(n);
	for (const ll& x : s) {
		a *= x;
	}

	bool ok = 1;
	vector<int> d;
	for (pair<const int, int>& x : m) {
		d.push_back(x.second);
		if (ok) {
			if (x.second == 1) {
				ok = 0;
			}
			while (x.second%2 == 0) {
				x.second /= 2;
			}
			if (x.second != 1) {
				ok = 0;
			}
		}
	}

	int mx = 0;
	if (d.size() > 0) {
		mx = *max_element(d.begin(), d.end());
	}
	int temp = 1, cnt = 0;
	while(temp < mx) {
		temp *= 2;
		cnt++;
	}
	b = cnt;
	b += (!ok);

	cout << a << ' ' << b << '\n';
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

