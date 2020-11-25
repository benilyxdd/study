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
	
	int pos = 0, neg;
	int ans = 0;
	int i = 0;
	while(i < n) {
		if (v[i] > 0 && pos = 0) {
			pos = v[i];
		}
		if (v[i] < 0 && neg = 0) {
			neg = v[i];
		}
		
		i++;
	}
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

