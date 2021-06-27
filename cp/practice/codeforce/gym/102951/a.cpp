#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> x_cord(n), y_cord(n);
	for (int &x : x_cord) {
		cin >> x;
	}
	for (int &y : y_cord) {
		cin >> y;
	}
	int mx = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int x1 = x_cord[i];
			int y1 = y_cord[i];
			int x2 = x_cord[j];
			int y2 = y_cord[j];
			int x_dis = abs(x2 - x1);
			int y_dis = abs(y2 - y1);
			int dis = x_dis * x_dis + y_dis * y_dis;
			mx = max(mx, dis);

		}
	}
	cout << mx << '\n';
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

