#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)3e5+5;
int n, ar[mxN];
int idk[mxN];

bool ok(int n) {
	return 1;
}

void f() {
	memset(idk, 0, sizeof(idk));
	idk[0] = (ar[0] < ar[1] ? -1 : 0);
	//idk[n-1] = (ar[n-1] < ar[n-2] ? -1 : 0);
	for (int i = 1; i < n; i++) {
		if (ar[i] < ar[i-1]) {
			idk[i] = idk[i-1]+1;
		} else if (ar[i] > ar[i-1]) {
			idk[i] = idk[i-1]-1;
		} else {
			idk[i] = idk[i-1];
		}
	}
}

void solve() {
	//input
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	int idk2[n];
	for (int i = 0; i < n; i++)
		idk2[i] = i+1;
	f();


	for (int i = 0; i < n; i++) 
		cout << idk[i] << " ";
	cout << "\n";
	//print
	cout << (is_permutation(ar, ar+n, idk2) ? 1 : 0);
	for (int i = 1; i < n; i++) {
		
	}
	cout << (*min_element(ar, ar+n) == 1 ? 1 : 0) << "\n";
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

