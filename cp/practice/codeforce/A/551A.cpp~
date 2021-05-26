#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}

	vector<int> ans;
	for (int i = 0; i < n; i++) {
		int temp = 1;
		for (int j = 0; j < n; j++) {
			if (v[i] < v[j]) {
				temp++;
			}
		}
		ans.push_back(temp);
	}
	for (int x : ans) {
		cout << x << " ";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
