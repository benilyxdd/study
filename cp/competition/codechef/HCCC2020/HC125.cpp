#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 100000;
int x, ar[mxN], cnt[251];
vector<int> v[251];

void f(int n) {
	if (n == 0)
		return;

	int yo = 0, save;
	for (int i = 2; i < 251; i++) {
		if (n%i == 0) {
			save = i;
			while(n%i == 0) {
				yo++;
				n /= i;
			}
			if (n != 1)
				return;
		}
	}
	v[save].push_back(n);
	cnt[save] += yo;
}

void solve() {
	cin >> x;
	for (int i = 0; i < x; i++) {
		cin >> ar[i];
		f(ar[i]);
	}
	
	int mx = 0;
	for (int i = 0; i < 251; i++) {
		if (cnt[i] != 0) {
			if (cnt[i]%2 == 0) {
				mx = max(mx, (int)v[i].size());
			} else {
				mx = max(mx, (int)v[i].size()-1);
			}
		}
	}
	cout << mx << "\n";
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

