#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct cow {
	char dir;
	int x, y;
};

void solve() {
	int n;
	cin >> n;
	vector<cow> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i].dir >> ar[i].x >> ar[i].y;
	}
	
	vector<int> ans;
	for (int i = 0; i < n; i++) {
		int time = INT_MAX;
		for (int j = 0; j < n; j++) {
			if (ar[i].dir != ar[j].dir) {
				int x_abs = abs(ar[i].x - ar[j].x); 
				int y_abs = abs(ar[i].y - ar[j].y); 
				
				if (ar[i].dir == 'N') {
					if (ar[j].y > ar[i].y) {
						if (y_abs > x_abs) {
							time = min(time, y_abs);
						}
					}
				} else if (ar[i].dir == 'E') {
					if (ar[j].x > ar[i].x) {
						if (x_abs > y_abs) {
							time = min(time, x_abs);
						}
					}
				}
			}
		}
		cout << time << ' ';
	}
	cout << '\n';
}

int main() {
	// freopen("name.in", "r", stdin);
	// freopen("name.out", "w", stdout);
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

