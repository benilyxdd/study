#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 200001, mxX = (int)1e9+9;
int n, ar[mxN];
string s;

void solve() {
	cin >> n >> s;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];

	int mn = mxX;
	for (int i = 0; i < n-1; i++) {
		if (s[i] == 'R' && s[i+1] == 'L') {
			mn = min(mn, (abs(ar[i+1]-ar[i]))/2);
		}
	}
	cout << (mn == mxX ? -1 : mn);
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


