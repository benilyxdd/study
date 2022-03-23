#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}

	bool ok = 1;
	int go = 0;
	vector<int> temp;
	auto it = min_element(ar.begin(), ar.end());
	for (int i = n-1; i >= 0; i--) {
		if (ar[i] == *it) {
			while(ar[i-1] == *it) {
				i--;
			}
			go = i;
			break;
		}
	}
	for (int j = go; j < n + go; j++) {
		temp.push_back(ar[j%n]);
	}


	if (!is_sorted(temp.begin(), temp.end())) {
		ok = 0;
	}

	if (!ok) {
		cout << "NO\n";
		return;
	}
	
	cout << "YES\n";

	if (is_sorted(ar.begin(), ar.end())) {
		cout << 0 << '\n';
	} else {
		cout << 1 << '\n';
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

