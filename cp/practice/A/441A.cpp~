#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	vector<int> v;
	for (int i = 0; i < a; i++) {
		bool u = false;
		int c, d;
		cin >> c;
		while(c--) {
			cin >> d;
			if (b > d && u == false) {
				u = true;
				v.push_back(i+1);
			}
		}
	}
	cout << v.size() << "\n";
	for (int& e : v) {
		cout << e << " ";
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


