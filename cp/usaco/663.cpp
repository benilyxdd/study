#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	vector<int> ar(8);
	for (int &x : ar) {
		cin >> x;
	}

	vector<int> x_level = {ar[0], ar[2], ar[4], ar[6]};
	vector<int> y_level = {ar[1], ar[3], ar[5], ar[7]};

	int mx = 0;
	int x_min = *min_element(x_level.begin(), x_level.end());
	int x_max = *max_element(x_level.begin(), x_level.end());
	int y_min = *min_element(y_level.begin(), y_level.end());
	int y_max = *max_element(y_level.begin(), y_level.end());

	mx = max(mx, x_max - x_min);
	mx = max(mx, y_max - y_min);

	cout << mx * mx << '\n';
}

int main() {
	freopen("square.in", "r", stdin);
	freopen("square.out", "w", stdout);
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

