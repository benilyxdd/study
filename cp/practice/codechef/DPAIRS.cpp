#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b;
	int n = a+b-1;
	vector<pair<int, int>> v, v1;
	for (int i = 0; i < a; i++) {
		cin >> c;
		v.push_back({c, i});
	}
	for (int i = 0; i < b; i++) {
		cin >> c;
		v1.push_back({c, i});
	}
	sort(v.begin(), v.end());
	sort(v1.begin(), v1.end());
	for (int i = 0; i < a; i++) {
		if (n>0) {
			cout << v[0].second << " " << v1[i].second << "\n";
			n--;
		}
	}
	for (int i = 0; i < b; i++) {
		if (n>0) {
			cout << v[i].second << " " << v1[b].second << "\n";
			n--;
		} else {
			break;
		}
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

