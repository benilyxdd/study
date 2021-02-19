#include <bits/stdc++.h>
using namespace std;

#define ll long long

int f(vector<vector<int>>& vec, int now, int go) {
	if (now == go || now = go-1)
		return vec[now][go];

	int mn = 0;
	int temp = 100;

	for (int i = now; i <= go; i++) {
		temp = min(temp, 	
	}
}

void solve() {
	int n;
	cin >> n;
	vector<vector<int>> cost(n, vector<int>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> cost[i][j];

	
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

