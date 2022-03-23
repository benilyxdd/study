#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 10;
int d[N];

void solve() {
	string s;
	cin >> s;
	if (s[0] == '-') {
		s = s.substr(1);
	sort(s.begin(), s.end());
	do {
		int n = stoi(s);
		if (n%8 == 0) {
			cout << "Yes\n";
			return;
		}
	} while (std::next_permutation(s.begin(), s.end()));
	cout << "No\n";
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

