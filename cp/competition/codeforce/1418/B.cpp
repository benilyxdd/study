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
	bool ar[n];
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}
	vector<int> v1;
	for (int i = 0; i < n; i++) {
		if (ar[i] == 0) {
			v1.push_back(v[i]);
		}
	}
	sort(v1.begin(), v1.end());
	
	int j = 0;
	for (int i = 0; i < n ; i++) {
		if (ar[i] == true) {
			cout << v[i] << " ";
		} else {
			cout << v1[j] << " ";
			j++;
		}
	}
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

