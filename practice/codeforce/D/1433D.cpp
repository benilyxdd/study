#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 5001;
int n, a[mxN];
map<int, int> m;


bool cmp(pair<int, int>& a, pair<int ,int>& b) {
	return a.second < b.second;
}

vector<pair<int, int>> sortm(map<int, int>& M) {
	vector<pair<int, int>> v;
	for(auto& it : M) {
		v.push_back(it);
	}

	sort(v.begin(), v.end(), cmp);
	return v;
}

void solve() {
	m.clear();
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		m[a[i]]++;
	}
	if (m.size() == 1) {
		cout << "NO\n";
		return;
	}

	cout << "YES\n";
	bool ok = 1;
	int xd;
	vector<pair<int, int>> v = sortm(m);
	for (int i = 0; i < n; i++) {
		if (a[i] == v[0].first && ok) {
			for (int j = 0; j < n; j++) {
				if (v[0].first != a[j]) {
					cout << j+1 << " " << i+1 << "\n";
					xd = j;
				}
			}
			ok = false;
		} else if (a[i] == v[0].first) {
			cout << xd+1 << " " << i+1 << "\n";
		}
	}	
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


