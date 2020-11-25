#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	int son;
	for (int i = 0; i < n; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int sum = a+b+c+d;
		v.push_back(sum);
		if (i == 0) {
			son = sum;
		}
	}
	sort(v.rbegin(), v.rend());
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == son) {
			cout << i+1 << "\n";
			return;
		}
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
