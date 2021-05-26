//https://www.geeksforgeeks.org/maximize-sum-selected-numbers-performing-following-operation/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int ar[mxN], n;
map<int, int> m;

void input() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	for (int i = 0; i < n; i++)
		m[ar[i]]++;
}

void solve() {
	input();
	int mx = *max_element(ar, ar+n);

	for (int i = 2; i <= mx; i++) {
		m[i] = max(m[i-1], m[i-2] + m[i]*i);
	}

	for (auto& x : m) {
		cout << x.first << ' ' << x.second << '\n';
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

