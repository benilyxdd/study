#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	auto it = min_element(v.begin(), v.end());
	int cnt = count(v.begin(), v.end(), *it);
	if (cnt > 1) {
		cout << "Still Rozdil\n";
	} else {
		cout << distance(v.begin(), it)+1;
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


