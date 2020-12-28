#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1001;
const int MAX = (int)1e9+10;
int ar[mxN], n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	
		
	int l = 0, r = 0;
	for (int i = 0; i < n-1; i++) {
		if (ar[i+1] < ar[i]) {
			l = i+1;
			break;
		}
	}
	
	for (int i = l; i < n; i++) {
		if (ar[i+1] > ar[i]) {
			r = i+1;
			break;
		}	
	}
	//cout << "R: " << r << "\n";
	//cout << "L: " << l << "\n";
	reverse(ar+l-1, ar+r);
	for (int i = 1; i <= n; i++) {
		if (ar[i-1] != i) {
			cout << "0 0\n";
			return;
		}
	}
	cout << l << " " << r << "\n";
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

