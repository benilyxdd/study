#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = 200002;
int ar[mxN], n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	
	int mn = *min_element(ar, ar+n);
	vector<int> v;
	for (int i = 0; i < n; i++) 
		if (ar[i] == mn) 
			v.push_back(i);
	v.push_back(v[0]+n);

	int mx = 0;
	for (int i = 0; i < v.size()-1; i++) {
		mx = max(mx, abs(v[i]-v[i+1]));
	}
	//cout << "mx: " << mx << '\n';
	cout << mn*n+mx-1;
}

signed main() {
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

