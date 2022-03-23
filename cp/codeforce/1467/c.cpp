#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	vector<int> x(a), y(b), z(c);
	for (int i = 0; i < a; i++)
		cin >> x[i];
	for (int i = 0; i < b; i++)
		cin >> y[i];
	for (int i = 0; i < c; i++)
		cin >> z[i];
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	sort(z.begin(), z.end());

	

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

