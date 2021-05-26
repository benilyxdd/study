//https://www.geeksforgeeks.org/maximum-sum-bi-tonic-sub-sequence/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e3;
int n, ar[mxN], pre[mxN], suf[mxN];
	
int findmax() {
	int mx = 0;
	for (int i = 0; i < n; i++)
		mx = max(pre[i]+suf[i]-ar[i], mx);
	return mx;
}

void debug() {
	cout << "pre: " << '\n';
	for (int i = 0; i < n; i++)
		cout << pre[i] << ' ';
	cout << "\n\n";

	cout << "suf: " << '\n';
	for (int i = 0; i < n; i++)
		cout << suf[i] << ' ';
	cout << '\n';
}

void dp() {
	for (int i = 0; i < n; i++) {
		suf[i] = pre[i] = ar[i];
	}
	
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (ar[i] > ar[j]) {
				pre[i] = max(pre[i], pre[j]+ar[i]);
			}
		}
	}

	for (int i = n-2; i >= 0; i--) {
		for (int j = n-1; j >= i; j--) {
			if (ar[i] > ar[j]) {
				suf[i] = max(suf[i], suf[j]+ar[i]);
			}
		}
	}
}

void input() {
	memset(pre, 0, sizeof(pre));
	memset(suf, 0, sizeof(suf));

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
}

void solve() {
	input();
	dp();
	//debug();
	cout << findmax() << '\n';
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


