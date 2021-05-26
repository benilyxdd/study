#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)100004;
int ar[mxN], la[mxN*4], n, m, a, b, c;
array<int, 3> st[mxN*4];

void shift(int si) {
	int y = st[si][2];
	st[si][2] = st[si][1];
	st[si][1] = st[si][0];
	st[si][0] = y;
}

void lazy(int si, int ss, int se) {
	if (la[si] == 0)
		return;

	int x = la[si];
	la[si] = 0;
	if (se != ss) {
		la[2*si] += x;
		la[2*si+1] += x;
	}

	x %= 3;
	for (int i = 0; i < x; i++) {
		shift(si);
	}
}

void make(int si, int ss, int se) {
	if (ss == se) {
		st[si][0] = 1;
		st[si][1] = 0;
		st[si][2] = 0;
		return;
	}

	int mid = (ss+se)/2;

	make(2*si, ss, mid);
	make(2*si+1, mid+1, se);

	for (int i = 0; i < 3; i++) {
		st[si][i] = st[2*si][i]+st[2*si+1][i];
	}
}

void update(int si, int ss, int se, int qs, int qe) {
	lazy(si, ss, se);

	if (ss > qe || se < qs)
		return;

	if(ss >= qs && se <= qe) {
		shift(si);

		if(ss != se) {
			la[2*si]++;
			la[2*si+1]++;
		}
		return;
	}	

	int mid = (ss+se)/2;

	update(2*si, ss, mid, qs, qe);
	update(2*si+1, mid+1, se, qs, qe);

	for (int i = 0; i < 3; i++)
		st[si][i] = st[2*si][i]+st[2*si+1][i];
}

int q(int si, int ss, int se, int qs, int qe) {
	lazy(si, ss, se);

	if (ss > qe || se < qs) 
		return 0;

	if (ss >= qs && se <= qe)
		return st[si][0];
	
	int mid = (se+ss)/2;

	int l = q(si*2, ss, mid, qs, qe);
	int r = q(si*2+1, mid+1, se, qs, qe);

	return l+r;
}

void solve() {
	cin >> n >> m;
	make(1, 1, n);
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		if (a == 0) {
			update(1, 1, n, b+1, c+1);
		} else {
			cout << q(1, 1, n, b+1, c+1) << "\n";
		}
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

