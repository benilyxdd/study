#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 1; i <= n; i++) {
		if (n%i==0) {
			string temp = s.substr(0, i);
			reverse(temp.begin(), temp.end());
			s.replace(0, i, temp);
		}
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

