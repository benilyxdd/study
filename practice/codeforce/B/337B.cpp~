#include <bits/stdc++.h>
using namespace std;

#define ll long long

pair<int, int> f(int i, int j) {
	int gcd = __gcd(i, j);

	i /= gcd;
	j /= gcd;

	return {i, j};
}

bool cmp(int e, int e1, int f, int f1) {
	int lcm1 = e1*f1/__gcd(e1,f1);

	e *= lcm1/e1;
	f *= lcm1/f1;

	return e >= f;
}

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	int lcm1 = a*c/__gcd(a, c);
	int lcm2 = b*d/__gcd(b, d);

	int a1 = a, b1 = b, c1 = c, d1 = d;
	int a2 = a, b2 = b, c2 = c, d2 = d;

	b1 *= lcm1/a1;
	d1 *= lcm1/c1;
	a1 = lcm1;
	c1 = lcm1;
	
	a2 *= lcm2/b1;
	c2 *= lcm2/d1;
	b2 = lcm2;
	d2 = lcm2;
	
	int x = abs(b1-d1);
	int y = abs(a2-c2);
	
	cout << x << " " << a1 << " " << y << " " << b2 << "\n";

	pair<int, int> x1 = f(x, a1);
	pair<int, int> x2 = f(y, b2);

	if (cmp(x, a1, y, b2)) {
		cout << x2.first << '/' << x2.second;
	} else {
		cout << x1.first << '/' << x1.second;
	}
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

