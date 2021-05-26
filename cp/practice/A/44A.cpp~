#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	string a, b;
	vector<pair<string, string>> v;
	while(n--) {
		cin >> a >> b;
		if (find(v.begin(), v.end(), make_pair(a, b)) == v.end()) {
			v.push_back({a,b});
		}
	}
	cout << v.size() << "\n";
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


