#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	bool t = true;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
		if (a%2) {
			t = false;
		}
	}
	int cnt = 0;
	while(t) {
		for (int i = 0; i < n; i++) {
			v[i] /= 2;
		}
		cnt++;
		for (int i = 0; i < n; i++) {
			if (v[i]%2){
				t = false;
			}
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

