#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	int a;
	while(n--) {
		cin >> a;
		auto it = find(v.begin(), v.end(), a);
		if (it == v.end()) {
			v.push_back(a);
		} else {
			v.erase(it);
		}
	}
	cout << v.size() << "\n";
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

