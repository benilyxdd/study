#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 301;
int n, k;
char a[mxN][mxN];
int cntr[mxN], cntc[mxN];

bool f(char x) {
	if (x == 'X') return true;
	return false;
}

void solve() {
	//cin
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	
	//process;
	
	for (int i = 1; i < n-1; i++) {
		for (int j = 1; j < n-1; j++) {
			if (f(a[i][j])) {
				if (f(a[i-1][j]) && f(a[i+1][j]) && f(a[i][j-1]) && f(a[i][j+1])) {
					a[i][j] = 'O';
				}
			}
		}
	}
	///*	
	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (f(a[i][j])) {
				if (f(a[i][j-1]) && f(a[i][j+1])) {
					if (f(a[i-1][j]) && f(a[i-2][j]) || f(a[i+1][j]) && f(a[i+2][j])) {
						cnt1++;
					}
				} else if (f(a[i-1][j]) && f(a[i+1][j])) {
					if (f(a[i][j-1]) && f(a[i][j-2]) || f(a[i][j+1]) && f(a[i][j+2])) {
						cnt1++;
					}
				}
			}
		}
	}
	for (int i = n-1; i >= 0; i--) {
		for (int j = n-1; j >= 0; j--) {
			if (f(a[i][j])) {
				if (f(a[i][j-1]) && f(a[i][j+1])) {
					if (f(a[i-1][j]) && f(a[i-2][j]) || f(a[i+1][j]) && f(a[i+2][j])) {
						cnt2++;
					}
				} else if (f(a[i-1][j]) && f(a[i+1][j])) {
					if (f(a[i][j-1]) && f(a[i][j-2]) || f(a[i][j+1]) && f(a[i][j+2])) {
						cnt2++;
					}
				}
			}
		}
	}
	
	if (cnt1 < cnt2) {	
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (f(a[i][j])) {
					if (f(a[i][j-1]) && f(a[i][j+1])) {
						if (f(a[i-1][j]) && f(a[i-2][j]) || f(a[i+1][j]) && f(a[i+2][j])) {
							a[i][j] = 'O';
						}
					} else if (f(a[i-1][j]) && f(a[i+1][j])) {
						if (f(a[i][j-1]) && f(a[i][j-2]) || f(a[i][j+1]) && f(a[i][j+2])) {
							a[i][j] = 'O';
						}
					}
				}
			}
		}
	} else {
		for (int i = n-1; i >= 0; i--) {
			for (int j = n-1; j >= 0; j--) {
				if (f(a[i][j])) {
					if (f(a[i][j-1]) && f(a[i][j+1])) {
						if (f(a[i-1][j]) && f(a[i-2][j]) || f(a[i+1][j]) && f(a[i+2][j])) {
							a[i][j] = 'O';
						}
					} else if (f(a[i-1][j]) && f(a[i+1][j])) {
						if (f(a[i][j-1]) && f(a[i][j-2]) || f(a[i][j+1]) && f(a[i][j+2])) {
							a[i][j] = 'O';
						}
					}
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (f(a[i][j])) {
				if (f(a[i][j-1]) && f(a[i][j-2])) {
					if (f(a[i-1][j]) && f(a[i-2][j]) || f(a[i+1][j]) && f(a[i+2][j])) {
						a[i][j] = 'O';
					}
				} else if (f(a[i-1][j]) && f(a[i-2][j])) {
					if (f(a[i][j-1]) && f(a[i][j-2]) || f(a[i][j+1]) && f(a[i][j+2])) {
						a[i][j] = 'O';
					}
				}
			}
		}
	}
	//*/
	///*
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (f(a[i][j])) {
				if (f(a[i][j+1]) && f(a[i][j+2])) {
					a[i][j+2] = 'O';
				}
				if (f(a[i+1][j]) && f(a[i+2][j])) {
					a[i+2][j] = 'O';
				}
			}
		}
	}	
	//*/	
	//print
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j];
		}
		cout << "\n";
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

