#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < s.length(); i++) {
		char a = s[i];
		int t = 1;
		while(s[i+1] == a) {
			i++;
			t++;
			if (t == 5) {
				break;
			}
		}
		//cout << s[i] << "\n";
		cnt++;
	}
	cout << cnt;
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


