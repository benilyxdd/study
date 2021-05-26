#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string s;
	int n;
	cin >> s >> n;
	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		a--;
		c = c%(b-a);
		rotate(s.begin()+a, s.begin()+b-c, s.begin()+b);
	}
	cout << s << "\n";
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

