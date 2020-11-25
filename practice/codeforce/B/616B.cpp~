#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b;
	vector<int> v;
	for (int i = 0; i < a; i++) {
		vector<int> temp;
		for (int j = 0; j < b; j++) {
			cin >> c;
			temp.push_back(c);
		}
		v.push_back(*min_element(temp.begin(), temp.end()));
	}
	cout << *max_element(v.begin(), v.end()) << "\n";
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

