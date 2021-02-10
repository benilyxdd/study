#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1e5+5;
int ar[mxN], n;
unordered_map<int, int> m;

void solve() {
	char s[mxN*2];
	cin >> s >> n;
	int len = strlen(s);
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		m[ar[i]]++;
	}
	for (pair<const int, int>& x : m) {
		x.second %= 2;
	}
	
	for (pair<const int, int>& x : m) {
		if (x.second == 1) {
			int y = x.first;
			reverse(s+y-1, s+len-y+1);
		}
	}
	cout << s;
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

