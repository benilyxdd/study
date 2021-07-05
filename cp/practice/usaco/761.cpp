#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct entry {
	int day, change;
	string name;
	char am;
};

void solve() {
	map<string, int> mp;
	mp["Bessie"] = 7;
	mp["Elsie"] = 7;
	mp["Mildred"] = 7;
	vector<string> top;

	int n, ans = 0;
	cin >> n;
	vector<entry> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i].day >> ar[i].name >> ar[i].am >> ar[i].change;
	}

	auto cmp = [](entry &a, entry &b) {
		return a.day < b.day;
	};

	sort(ar.begin(), ar.end(), cmp);
	for (int i = 0; i < n; i++) {
		int temp = (ar[i].am == '-' ? -1 : 1);
		mp[ar[i].name] += (ar[i].change * temp);

		int mx = 0;
		vector<string> mx_name;
		for (pair<const string, int> &p : mp) {
			if (p.second > mx) {
				mx_name.clear();
				mx_name.push_back(p.first);
				mx = p.second;
			} else if (p.second == mx) {
				mx_name.push_back(p.first);
			}
		}
		sort(mx_name.begin(), mx_name.end());
		if (mx_name != top) {
			top = mx_name;
			ans++;
		}
	}

	cout << ans << '\n';
}

int main() {
	freopen("measurement.in", "r", stdin);
	freopen("measurement.out", "w", stdout);
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

