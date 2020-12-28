#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
ll ar[mxN], n;
bool ok[mxN];

vector<int> f() {
	sort(ar, ar+n);

	for (int i = 0; i < n; i++) {
		memset(ok, false, sizeof(ok));

		ll tar = ar[i];
		vector<ll> ans;
		ans.push_back(tar);
		
	}
}

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	
	vector<int> yo = f();
	for (int& x : yo) 
		cout << x << " ";
	cout << "\n";
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

