#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> s;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		s.push_back(a);
	}

	auto x = find(s.begin(), s.end(), 1);
	auto y = find(s.begin(), s.end(), n);
	
	int mx = max(abs(x-s.begin()), max(abs(y-s.begin()), max(abs(x-s.end()+1),abs(y-s.end()+1))));

	cout << mx << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
