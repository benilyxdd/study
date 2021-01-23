#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)222;
int ar[mxN], n, k;

void solve() {
	cin >> n >> k;
	for (int i = 0; i < 2*n+1; i++) 
		cin >> ar[i];

	for (int i = 1; i <= 2*n+1 && k; i+=2) {
		if (ar[i]-1 > ar[i-1] && ar[i]-1 > ar[i+1]) {
			ar[i]--, k--;
		}
	}
	
	for (int i = 0; i < 2*n+1; i++)
		cout << ar[i] << " ";
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


