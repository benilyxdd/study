#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	vector<int> v;
	int cur = 1;
	for (int i = 0; i < a-1; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	
	for (int i = 0; i < a; i++) {
		cur += v[i];
		if (v[i] > 1) {
			i += v[i]-1;
		}
		if (cur == b) {
			cout << "YES\n";
			return;
		} else if (cur > b){
			cout << "NO\n";
			return;
		}
	}
	cout << "NO\n";
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


