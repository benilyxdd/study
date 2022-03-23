#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n;
string s;

void solve() {
	cin >> n >> s;
	string temp = s;
	s[0] = s[0] == '1' ? '2' : '1';
	for (int i = 1; i < n; i++) {
		if ((s[i]+1) != s[i-1]) {
			s[i]++;
		}
	}
	for (int i = 0; i < n; i++)
		cout << s[i]-temp[i];
	cout << '\n';
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

