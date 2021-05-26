#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int b;
	cin >> b;
	vector<int> v, v1;
	for (int i = 0; i < b; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	int g;
	cin >> g;
	for (int i = 0; i < g; i++) {
		int a;
		cin >> a;
		v1.push_back(a);
	}
	sort(v.begin(), v.end());
	sort(v1.begin(), v1.end());
	int ans = 0;
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < g; j++) {
			if (abs(v[i]-v1[j]) <= 1) {
				v[i] = 102;
				v1[j] = 102;
				ans++;
				break;
			}
		}	
	}
	cout << ans << "\n";
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

