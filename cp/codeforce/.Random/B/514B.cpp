#include <bits/stdc++.h>
using namespace std;

#define ll long long

pair<int, int> f(int a, int b) {
	int d = __gcd(a, b);
	a /= d;
	b /= d;
	return {a, b};
}

void solve() {
	int n, x, y;
	cin >> n >> x >> y;
	set<pair<int, int>> s;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		pair<int, int> temp = f(y-b, x-a);
		s.insert(temp);
	}
	cout << s.size();
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

