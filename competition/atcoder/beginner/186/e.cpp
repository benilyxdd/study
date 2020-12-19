#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n, s, k;

void solve() {
	vector<int> temp;
	cin >> n >> s >> k;
	temp.push_back(s);
	int cnt = 0;
	while(s != 0) {
		int xd1 = n/k;
		s += xd1*k;
		s %= n;
		if (find(temp.begin(), temp.end(), s) != temp.end()) {
			cout << -1 << "\n";
			return;
		}
		cnt += xd1;
		temp.push_back(s);
	}
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

