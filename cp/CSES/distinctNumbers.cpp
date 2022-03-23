#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n; cin >> n;
	int a[n];
	set<int> s;
	for (int i = 0; i < n; i++) 
		cin >> a[i], s.insert(a[i]);
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

