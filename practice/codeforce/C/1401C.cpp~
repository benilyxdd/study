#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int ar[mxN], n;
bool ok[mxN];

void solve() {
	memset(ok, false, sizeof(ok));

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	int mn = *min_element(ar, ar+n);
	vector<int> go;
	for (int i = 0; i < n; i++) {
		if (ar[i]%mn == 0) {
			ok[i] = 1;
			go.push_back(ar[i]);
		}
	}
	sort(go.begin(), go.end());

	for (int i = 0, j = 0; i < n; i++) {
		if (ok[i]) {
			ar[i] = go[j];
			j++;
		}
	}

	for (int i = 0; i < n-1; i++) {
		if (ar[i+1] < ar[i]) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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

