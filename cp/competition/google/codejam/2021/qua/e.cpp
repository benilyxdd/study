#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string ar[100];
	for (int i = 0; i < 100; i++) {
		cin >> ar[i];
	}
	
	int cnt[10000];
	int q[10000];
	memset(cnt, 0, sizeof(cnt));
	for (int i = 0; i < 10000; i++) {
		q[i] = i+1;
		for (int j = 0; j < 100; j++) {
			if (ar[j][i] == '1') {
				cnt[i]++;
			}
		}
	}

	auto cmp = [&] (int& a, int& b) {
		return (cnt[a-1] > cnt[b-1]);
	};
	sort(q, q+10000, cmp);
	
	vector<double> a(100, 0);
	for (int i = 0; i < 100; i++) {
		int k0 = 0, k1 = 0, ps = 0;
		for (int j = 0; j < 10000; j++) {
			if (ar[i][j] == '1') {
				ps += k0;
				k1++;
			} else {
				k0++;
			}
		}
		a[i] = 1.0 * ps / (k0*k1);
	}

	cout << max_element(a.begin(), a.end()) - a.begin() << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("ein.txt", "r", stdin);
	//freopen("eout.txt", "w", stdout);

	int t = 1, i = 1, p;
	cin >> t >> p;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

