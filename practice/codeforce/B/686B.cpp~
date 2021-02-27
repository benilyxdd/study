#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
int ar[mxN], n;

void check() {
	for (int i = 0; i < n; i++)
		cout << ar[i] << ' ';
	cout << '\n';
}

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			if (i != j) {
				if (ar[j] > ar[j+1]) {
					swap(ar[j], ar[j+1]);
					cout << j+1 << ' ' << j+2 << '\n';
				}
			}
		}
	}
	//check();
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

