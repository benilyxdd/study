#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
int ar[mxN], n;

void solve() {
	int cnt = 0;
	vector<int> v, v1, v2;
	bool ok = 0, ok1 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		if (!ok && ar[i] < 0) {
			v.push_back(ar[i]);
			ok = 1;
			continue;
		}
		if (!ok1 && ar[i] > 0) {
			v1.push_back(ar[i]);
			ok1 = 1;
			continue;
		}
		v2.push_back(ar[i]);
	}
	bool k = false;
	vector<int> yo;
	if (v1.size() == 0) {
		k = 1;
		for (int i = 0, j = 0; i < v2.size() && j < 2; i++) {
			if (v2[i] < 0) {
				v1.push_back(v2[i]);
				j++;
				yo.push_back(i);
			}
		}
	}
	
	for (int& x : v1) {
		for (int i = 0; i < n; i++) {
			if (v2[i] == x) {
				v2[i] = 10000;
				break;
			}
		}
	}

	cout << v.size() << " ";
	for (int& x : v) {
		cout << x << " ";
	}
	cout << "\n" << v1.size() << " ";
	for (int& x : v1) {
		cout << x << " ";
	}
	cout << "\n" << v2.size()- (k ? 2 : 0) << " ";
	for (int& x : v2) {
		if (x != 10000) 
			cout << x << " ";
	}
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


