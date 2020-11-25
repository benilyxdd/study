#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, mx = 0;
	cin >> n;
	int a[n];
	for (int i = 0;i < n; i++)
		cin >> a[i];
	if (n == 1){
		cout << (a[0]^1) << "\n";
		return;
	}
	
	vector<int> damn(a, a+n);
	set<int> damn2(damn.begin(), damn.end());
	if  (damn2.size() == 1 && damn2.count(1)) {
		mx--;
	}
	int b[n];
	for (int i = 0; i < n; i++) {
		if (a[i] == 1) {
			b[i] = -1;
		} else {
			b[i] = 1;
		}
	}
	
	int dp[n];
	int x = 0, y = 0;
	for (int i = 0; i < n; i++) {
		y += b[i];
		if (y < 0) {
			y = 0;
		}
		x = max(x, y);
		dp[i] = x;
	}

	/*	
	for (int& x : dp) {
		cout << x << " ";
	}
	cout << "\n";
	*/

	int pos = n-1;
	int las = dp[n-1];
	for (int i = n-1; i >= 0; i--) {
		if (dp[i-1] != las) {
			pos = i;
			break;
		}
	}

	//cout << "pos: " << pos << "\n";
	//cout << "las: " << las << "\n";
	while(las) {
		if (a[pos] == 1) {
			las++;
		} else {
			las--;
		}
		a[pos] = (a[pos]^1);
		pos--;
	}
	
	/*
	for (int& x : a) {
		cout << x << " ";
	}
	cout << "\n";
	*/

	for (int i = 0; i < n; i++) {
		if (a[i] == 1) {
			mx++;
		}
	}
	cout << mx << "\n";
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


