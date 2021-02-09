#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 51;
string ar[mxN];
int n, m, x, q, dis[150];
string s;

void solve() {
	memset(dis, -1, sizeof(dis));
	vector<pair<int, int>> v, cnt[150];
	cin >> n >> m >> x;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		for (int j = 0; j < m; j++) {
			if (ar[i][j] == 'S') {
				v.push_back({i, j});
			} else {
				dis[ar[i][j]] = 0;
				cnt[ar[i][j]].push_back({i, j});
			}
		}
	}
	cin >> q >> s;
	
	for (int i = 65; i < 91; i++) {
		if ((dis[i] == -1 && dis[i+32] == -1) || (dis[i] != -1 && dis[i+32] != -1)) {
			continue;
		} else {
			int mn = (int)1e8;
			if (dis[i] == -1) {
				for (pair<int, int>& sp : v) {
					for (pair<int, int>& np : cnt[i+32]) {
						int d = (sp.first-np.first)*(sp.first-np.first)+(sp.second-np.second)*(sp.second-np.second);
						mn = min(d, mn);
					}
				}
			} else if (dis[i+32] == -1) {
				for (pair<int, int>& sp : v) {
					for (pair<int, int>& np : cnt[i]) {
						int d = (sp.first-np.first)*(sp.first-np.first)+(sp.second-np.second)*(sp.second-np.second);
						mn = min(d, mn);
					}
				}	
			}
			dis[i] = mn;
		}
	}
	
	int ans = 0;
	for (int i = 0; i < q; i++) {
		if (dis[s[i]] == (int)1e8) {
			cout << "-1\n";
			return;
		}
		if (isupper(s[i])) {
			if ((dis[s[i]] == -1 ||dis[s[i]] == (int)1e8) && (dis[s[i]+32] == -1 || dis[s[i]+32] == (int)1e8)) {
				cout << "-1\n";
				return;
			}
		} else if (islower(s[i])) {
			if ((dis[s[i]] == -1 ||dis[s[i]] == (int)1e8) && (dis[s[i]-32] == -1 || dis[s[i]-32] == (int)1e8)) {
				cout << "-1\n";
				return;
			}	
		}

		double yoo = dis[s[i]];
		yoo = sqrt(yoo);
		if (yoo > x) {
			ans++;
		}
	}
	cout << ans;
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

