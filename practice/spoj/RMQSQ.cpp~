#include <bits/stdc++.h>
using namespace std;

#define ll long long
int ar[100001], st[400001], n, m, a, b;

void f(int si, int ss, int se) {
	if (ss == se) {
		st[si] = ar[ss];
		return;
	}

	int mid = (ss+se)/2;
	f(2*si, ss, mid);
	f(2*si+1, mid+1, se);

	st[si] = min(st[2*si], st[2*si+1]);
}

int q(int si, int ss, int se, int qs, int qe) {
	if (ss > qe || se < qs) 
		return INT_MAX;

	if (ss >= qs && se <= qe) 
		return st[si];

	int mid = (ss+se)/2;
	return min(q(2*si, ss, mid, qs, qe), q(2*si+1, mid+1, se, qs, qe));
}

void solve() {
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> ar[i];
	
	f(1, 1, n);

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		cout << q(1, 1, n, a+1, b+1) << "\n";		
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

