#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int vp, vd, t, f, c;
	cin >> vp >> vd >> t >> f >> c;
	
	int ans = 0, princess = 0, dragon = 0;
	for (int i = 1; i < 2001; i++) {
		princess += vp;
		if (princess >= c) {
			cout << ans;
			break;
		}

		if (i > t) {
			dragon += vd;
			if (dragon >= princess) {
				ans++;
				int back_time = princess/vd;
				cout << back_time << "\n";
				princess += back_time*vp;
				princess += f*vp;
				dragon = 0;
			}
		}
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

