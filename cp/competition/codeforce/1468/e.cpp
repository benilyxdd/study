#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int ar[4];
	for (int i = 0; i < 4; i++)
		cin >> ar[i];
	sort(ar, ar+4);
	cout << ar[0]*ar[2] << "\n";
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

