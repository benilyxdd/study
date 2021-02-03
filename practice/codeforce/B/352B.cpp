#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int ar[mxN], n;
vector<int> cnt[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		cnt[ar[i]].push_back(i);
	}

	for (vector<int>& x : cnt) {
		sort(x.begin(), x.end());
	}	
	
	vector<pair<int, int>> ans;
	for (int i = 0; i < mxN; i++) {
		if (cnt[i].size() == 0) {
			continue;
		}
		if (cnt[i].size() == 1) {
			ans.push_back({i, 0});
		} else if (cnt[i].size() == 2) {
			ans.push_back({i, cnt[i][1]-cnt[i][0]});
		} else {
			int diff = cnt[i][1] - cnt[i][0];
			bool ok = 1;
			for (int j = 1; j < cnt[i].size()-1; j++) {
				int temp = cnt[i][j+1]-cnt[i][j];
				if (temp != diff) {
					ok = false;
					break;
				}
			}
			if (ok) {
				ans.push_back({i, diff});
			}
		}
	}
	cout << ans.size() << "\n";
	for (pair<int, int>& x : ans) {
		cout << x.first << " " << x.second << "\n";
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

