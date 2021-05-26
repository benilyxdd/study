#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	string s, s1;
	cin >> n >> s;
	int div = (s == "INDIAN" ? 200 : 400);
	int total = 0;
	string thing;
	while(n--) {
		int a;
		cin >> thing;
		if (thing == "CONTEST_WON") {
			cin >> a;
			total += (a > 20 ? 300 : 300+20-a);
		} else if (thing == "BUG_FOUND") {
			cin >> a;
			total += a;
		} else if (thing == "TOP_CONTRIBUTOR") {
			total += 300;
		} else {
			total += 50;
		}
	}
	cout << total/div << "\n";
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

