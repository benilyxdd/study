#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	vector<int> v;
	for (int i = a; i <= 1e9; i+=b) {
		v.push_back(i);
		v.push_back(i+1);
		i++;
	}
	for(auto& x : v) {
		cout << x << " ";
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


