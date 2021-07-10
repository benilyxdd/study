#include <bits/stdc++.h>
using namespace std;

#define ll long long

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int &x : ar) {
		cin >> x;
	}

	int ans = 0;
	set<int> t(ar.begin(), ar.end());
	bool ok = (t.size() != 1);
	while (ok) {
		vector<int> temp(n);
		for (int i = 0; i < n - 1; i++) {
			temp[i] = gcd(ar[i], ar[i + 1]);
		}
		temp[n - 1] = gcd(ar[n - 1], ar[0]);
		ans++;
		set<int> temp2(temp.begin(), temp.end());
		if (temp2.size() == 1) {
			break;
		}
		ar = temp;
	}
	cout << ans << '\n';
}

int main() {
	// freopen("input6.txt", "r", stdin);
	// freopen("output6.txt", "w", stdout);
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

