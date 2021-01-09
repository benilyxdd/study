#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)21;
int a[mxN], b[mxN], n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];

	int cnt = 0;
	for (int i = 0; i < n; i++) 
		cnt += max(0, a[i]-b[i]);
	cout << cnt << "\n";
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

