#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int ar[mxN], n;

void solve() {
	cin >> n;
	assert(n > 1);
	for (int i = 0; i < n; i++) 
		cin >> ar[i];

	set<int> s;
	for (int i = 0; i < n-1; i++) {
		s.insert(abs(ar[i]-ar[i-1]));
	}
	cout << s.size() << '\n';
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

