#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 100001;
int n, ar[mxN];
bool ok[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	
	for (int i = 0, next = n; i < n; i++) {
		ok[ar[i]] = 1;
		if (ok[next]) {
			while(ok[next]) {
				cout << next << " ";
				next--;
			}
		}
		cout << "\n";
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


