#include <bits/stdc++.h>
using namespace std;

#define ll long long

int mx(vector<int>& vec, int n) {
	int mxsofar = 0, mxend = 0;
	for (int i = 0; i < n; i++) {
		mxend = mxsofar += vec[i];
		mxend = max(0, mxend);
		mxsofar = max(mxsofar, mxend);
	}
	return mxsofar;
}

void solve() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++)
		cin >> vec[i];
	
	cout << mx(vec, n);
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

