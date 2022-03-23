#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.rbegin(), v.rend());

	if (v[0]+v[1] > v[2] && v[1]+v[2] > v[0] && v[0]+v[2] > v[1]){
		cout << "YES\n";
	} else {
		for (int i = 1; i < n-2; i++) {
			if (v[i]+v[i+1]>v[i+2] && v[i+1]+v[i+2]>v[i] && v[i]+v[i+2]>v[i+1]) {
				cout << "YES\n";
				return;
			}
		}
		cout << "NO\n";
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

