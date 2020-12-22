#include <bits/stdc++.h>
using namespace std;

#define ll long long
int d1, v1, d2, v2, p;

void solve() {
	cin >> d1 >> v1 >> d2 >> v2 >> p;
	int day = 0;
	int cnt = 0;
	for (int i = 1; i < 1000; i++) {
		if (cnt >= p) {
			day = i-1;
			break;
		}
		if (i >= d1) {
			cnt+=v1;
		}
		if (i >= d2) {
			cnt+=v2;
		}
	}
	
	cout << day << "\n";
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

