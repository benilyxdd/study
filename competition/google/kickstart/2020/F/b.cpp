#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	vector<pair<int, int>> v, v1;
	for (int i = 0; i < a; i++) {
		int c, d;
		cin >> c >> d;
		v.push_back(make_pair(c, d));
	}
	sort(v.begin(), v.end());
	
	for (int i = 0; i < a; i++) {
		v1.push_back(make_pair(v[i].first, v[i].first+b));
		int cnt = 0;
		for (int j = i+1; j < a; j++) {
			if (v[j].second <= v1[i].second) {
				cnt++;
				if (j == a-1) {
					i+=cnt;
				}
			} else {
				i+=cnt;
				break;
			}
		}
	}
	cout << v1.size() << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

