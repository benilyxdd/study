#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
int ar[mxN], n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];

	int pos1, pos2;
	for (int i = 1; i < n; i++) {
		while(ar[i] > ar[i-1]) {
			i++;
		}
		pos1 = i;
		break;
	}
	
	for (int i = n-1; i >= 0; i--) {
		while(ar[i] < ar[i-1]) {
			i--;
		}
		pos2 = i;
		break;
	}

	for (int i = pos1+1; i <= pos2; i++) {
		if (ar[i] != ar[i-1]) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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


