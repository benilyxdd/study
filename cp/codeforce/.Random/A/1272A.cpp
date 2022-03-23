#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	vector<int> v;
	for (int i = 0; i < 3; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());

	int x = (v[0]+v[2])/2;
	for (int i = 0 ; i < 3; i++) {
		if (v[i] < x) {
			v[i]++;
		} else if (v[i] > x){
			v[i]--;
		}
	}
	int n = abs(v[1]-v[2]) + abs(v[0]-v[1]) + abs(v[0]-v[2]);
	cout << n << "\n";
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


