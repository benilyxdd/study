#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	double a, b, c;
	cin >> a >> b >> c;
	vector<double> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	sort(v.begin(), v.end());
	cout << "Sum: " << a+b+c << "\n";
	cout << fixed << setprecision(10) << "Mean: " << (a+b+c)/3 << "\n";
	cout << setprecision(0) << "Medain: " << v[1] << "\n";
	cout << "Product: " << a*b*c << "\n";
	cout << "Smallest: " << v[0] << "\n";
	cout << "Largest: " << v[2] << "\n";
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

