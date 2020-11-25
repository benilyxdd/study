#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	int mn = 1001;
	for (int i = 1; i < n-1; i++) {
		vector<int> v1(v.begin(), v.end());
		v1.erase(v1.begin()+i);
		int temp = 0;
		for (int j = 0; j < n-2; j++) {
			int x = abs(v1[j]-v1[j+1]);
			temp = max(x, temp);
		}
		mn = min(temp, mn);
	}
	cout  << mn << "\n";
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


