#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
int ar[mxN], n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];

	vector<int> v;
	for (int i = 0; i < n; i++) {
		int x = upper_bound(v.begin(), v.end(), ar[i])-v.begin();
		if (x < v.size())
			v[x] = ar[i];
		else
			v.push_back(ar[i]);
	}
	cout << v.size() << "\n";
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

