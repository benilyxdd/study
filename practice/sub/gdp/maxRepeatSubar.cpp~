//https://www.geeksforgeeks.org/maximum-subarray-sum-array-created-repeated-concatenation/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
int n, k, ar[mxN];

void input() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
}

int kadane() {
	int cur = 0, mx = 0;
	for (int i = 0; i < n*k; i++) {
		cur += ar[i%n];
		cur = max(0, cur);
		mx = max(cur, mx);
	}
	if (mx == 0) 
		return *max_element(ar, ar+n);
	return mx;
}

void solve() {
	input();
	cout << kadane();
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

