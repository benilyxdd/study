#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int cnt = 0, n;
	cin >> n;
	int ar[n];
	for (int i = 0; i < n; i++) 
		cin >> ar[i];

	set<double> x;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			double temp = (double) (ar[i]-ar[j])/2;
			if (temp > 0)
				x.insert(temp);
		}
	}
	cout << x.size() << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

