#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m;
	cin >> n >> m;
	int ar[200000];
	if (m == 0) {
		cout << "1\n";
		return;
	}
	for (int i = 0; i < m; i++)
		cin >> ar[i];
	if (n == m) {
		cout << "0\n";
		return;
	}

	sort(ar, ar+m);
	vector<int> v;
	int now = 1;
	for (int i = 0; i < m; i++) {
		v.push_back(ar[i]-now);
		now = ar[i];
	}
	if (now != ar[m-1])
		v.push_back(n-now);

	int mn = *min_element(v.begin(), v.end());
	//cout << "mn: " << mn << "\n";
	int cnt = 0;
	for (int& x : v) {
		if (x%mn == 0) {
			cnt += x/mn;
		} else{
			cnt += x/mn+1;
		}
	}
	cout << cnt << "\n";
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

