#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	vector<vector<int>> pos(n, vector<int>()); // which pos of the ar[i];
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		pos[ar[i]].push_back(i);
	}

	

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

