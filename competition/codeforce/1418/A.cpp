#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	ll a, b, c;
	cin >> a >> b >> c;
	ll coal = b * c;
	ll total = coal + c-1;
	ll time;
	if (total%(a-1) == 0) {
		time = total/(a-1);
	} else {
		time = total/(a-1)+1;
	}
	time += c;
	cout << time << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

