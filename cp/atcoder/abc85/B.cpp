#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	set<int> s;
	int a;
	while(n--) {
		cin >> a;
		s.insert(a);
	}
	cout << s.size() << "\n";
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

