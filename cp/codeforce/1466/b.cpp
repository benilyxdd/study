#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
int ar[mxN], n;

void solve() {
	cin >> n;
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		m[ar[i]]++;
	}
	
	vector<pair<int, int>> v;
	for (auto& x : m) {
		v.push_back(x);
	}
	reverse(v.begin(), v.end());

	for (auto& x : v) {
		if (x.second > 0 && m[x.first+1] == 0) {
			m[x.first+1]++;
			m[x.first]--;
		}
	}
	
	int cnt = 0;
	for (auto& x : m) {
		if (x.second > 0) {
			cnt++;
		}
	}
	cout << cnt << "\n";
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

