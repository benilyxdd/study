#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	auto it = find_if(v.rbegin(), v.rend(), [](int i) {return i == 1;});
	auto it2 = find_if(v.rbegin(), v.rend(), [](int i) {return i == 0;});
	int dis = distance(it, v.rend());
	int dis2 = distance(it2, v.rend());
	cout << min(dis, dis2) << "\n";
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


