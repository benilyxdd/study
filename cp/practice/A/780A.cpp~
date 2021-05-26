#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n*2; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	vector<int> desk;
	int mx = 0;
	for (int i = 0; i < v.size(); i++) {
		auto it = find(desk.begin(), desk.end(), v[i]);
		if (it == desk.end()) {
			desk.push_back(v[i]);
		} else {
			desk.erase(it);
		}
		if (desk.size() > mx) {
			mx = desk.size();
		}
	}
	cout << mx << "\n";
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
