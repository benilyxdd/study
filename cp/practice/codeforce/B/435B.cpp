#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string a;
	int k;
	cin >> a >> k;

	int len = a.length();
	if (len == 1) {
		cout << a;
		return;
	}
	for (int i = 0; i < len; i++) {
		int mx = a[i]-'0', pos = i;
		//cout << mx << "\n";
		for (int j = 0; j < k; j++) {
			if (i+j+1 >= len)
				continue;
			if (a[i+j+1]-'0' > mx) {
				mx = a[i+j+1]-'0';
				pos = i+j+1;
			}
		}
		//cout << mx << "\n";
		if (mx > a[i]-'0') {
			//cout << pos << " " << i << "\n";
			for (int l = pos; l > i; l--) {
				swap(a[l], a[l-1]);
				k--;
			}
		}
	}
	cout << a;
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

