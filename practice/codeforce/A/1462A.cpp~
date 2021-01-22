#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)301;
int n, ar[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];


	for (int i = 0, j = n-1; i < n/2+1 && i <= j; i++, j--) {
		if (j == i) {
			cout << ar[j] << " ";
		} else {
			cout << ar[i] << " " << ar[j] << " ";
		}	
	}
	cout << "\n";
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


