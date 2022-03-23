#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m;
	cin >> n >> m;
	map<ll, ll> mp;
	vector<array<ll, 2>> question(n);
	for (int i = 0; i < n; i++) {
		cin >> question[i][0] >> question[i][1];
		mp[question[i][0]] = question[i][1];
	}

	vector<ll> ans;
	for (int i = 0; i < m; i++) {
		ll student;
		cin >> student;

		auto it = mp.lower_bound(student);
		ll key = (*it).first;
		ll value = (*it).second;
		if (it == mp.begin()) {
			ll get = (*it).first;
			ans.push_back(get);
			mp.erase(it);
			if (get + 1 <= value) {
				mp[get + 1] = value;
			}
		} else if (student >= key && student <= value) {
			ans.push_back(student);
			mp.erase(it);
			if (key <= student - 1) {
				mp[key] = student - 1;
			}
			if (student + 1 <= value) {
				mp[student + 1] = value;
			}
		} else if (student > value) {
			if (it == mp.end()) {
				it--;
				key = (*it).first;
				value = (*it).second;
				ans.push_back(value);
				mp.erase(it);
				if (key <= value - 1) {
					mp[key] = value - 1;
				}
			} else {
				auto it2 = it;
				it2--;
				ll key2 = (*it2).first;
				ll value2 = (*it2).second;
				
				if (abs(value2 - student) < abs(key - student)) {
					ans.push_back(value2);
					mp.erase(it2);
					if (key2 <= value2 - 1) {
						mp[key2] = value2 - 1;
					}
				} else {
					ans.push_back(key);
					mp.erase(it);
					if (key - 1 <= value) {
						mp[key - 1] = value;
					}
				}
			}
		}
	}
	for (ll &x : ans) {
		cout << x << ' ';
	}
	cout << '\n';
}

int main() {
	freopen("input3.txt", "r", stdin);
	freopen("output3.txt", "w", stdout);
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

