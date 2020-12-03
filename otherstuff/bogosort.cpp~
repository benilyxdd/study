#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve() {
	int n = 7;
	cin >> n;
	vector<int> v;
	for (int i = 1; i <= n; i++) {
		v.push_back(i);
	}
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	shuffle(v.begin(), v.end(), default_random_engine(seed));
	while(!is_sorted(v.begin(), v.end())) {
		shuffle(v.begin(), v.end(), default_random_engine(seed));
		for (int& x : v) {
			cout << x << " ";
		}
		cout << "\n";
	}
}

int main() {
	//ios::sync_with_stdio(0);
	//cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

