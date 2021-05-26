#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)3e5+5;
int ar[mxN], n;

void solve() {
	int n;
	cin >> n;
	int x = 10-n%10;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		v.push_back(x);
		x++;
		if (x == 10)
			x = 0;
	}
	reverse(v.begin(), v.end());
	
	for (int i = 10; i < n; i++) {
		v[i] = v[i-1]+1;
		if (v[i] == 10)
			v[i] = 0;
	}
	for (int& i : v)
		cout << i;
	cout << "\n";
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

