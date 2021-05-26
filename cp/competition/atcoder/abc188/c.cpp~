#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)pow(2, 16)+1;
int ar[mxN], n;

void solve() {
	cin >> n;
	int x = pow(2, n);
	bool ok[x];
	memset(ok, false, sizeof(ok));
	for (int i = 0; i < x; i++) {
		cin >> ar[i];
	}
	
	int cnt = 0;
	for (int i = 0; i < x; i++) {
		if (ok[i] == false) {
			cnt++;
		}
	}
	while(cnt != 2) {
		for (int i = 0; i < x; i++) {
			int a, b, save;
			if (ok[i] == false) {
				save = i;
				a = ar[i];
				i++;
				while(ok[i] != false) {
					i++;
				}
				b = ar[i];
			}
			if (a > b) {
				ok[i] = 1;
			} else {
				ok[save] = 1;
			}
		}
		cnt = 0;
		for (int i = 0; i < x; i++) {
			if (!ok[i]) {
				cnt++;
			}
		}
	}
	
	vector<pair<int, int>> v;
	for (int i = 0; i < x; i++) {
		if (!ok[i]) {
			v.push_back({ar[i], i+1});
		}
	}
	sort(v.begin(), v.end());
	cout << v[0].second;
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

