#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int sum = 0;
	int e = 0, o = 0;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		sum += a;
		v.push_back(a);
		if (a%2) {
			o++;
		} else {
			e++;
		}
	}
	if (sum % 2) {
		cout << o << "\n";
	} else {
		cout << e << "\n";
	}
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


