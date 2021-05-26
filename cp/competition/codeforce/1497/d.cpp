#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 5001;
int n, t[mxN], s[mxN];

void input() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> t[i];
	for (int i = 0; i < n; i++)
		cin >> s[i];
}

void solve() {
	input();

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

