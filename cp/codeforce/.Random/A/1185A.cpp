#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int v[3];
	for (int i = 0 ; i < 3; i++) {
		cin >> v[i];
	}
	int dis;
	cin >> dis;
	sort(v, v+3);
	int t = 0;
	t += max(dis-abs(v[0]-v[1]), 0);
	t += max(dis-abs(v[1]-v[2]), 0);
	cout << t << "\n"; 
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


