#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n = 4;
	vector<int> v = {0,1,2,3,4,5,6,7,8,9};
	string s;
	for (int i = 1; i <= 9; i++) {
		if (i%3 == 0) {
			cout << i << "\n";
		} else {
			cout << i << " ";
		}
	}
	while(n > 0) {
		cin >> s;
		if (v[s[3]-'0'] != 'x' && v[s[3]-'0'] != 'o') {
			v[int(s[3])] = s[1];
			n--;
		}
		for (int i = 1; i <= 9; i++) {
			if (i%3 == 0) {
				cout << v[i] << "\n";
			} else {
				cout << v[i] << " ";
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(1);
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

