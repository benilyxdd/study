#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a;
	cin >> a;
	string s;
	cin >> s;
	string room = "0000000000";
	for (int i = 0; i < a; i++) {
		if (s[i] == 'L') {
			for (int j = 0; j < 10; j++) {
				if(room[j] == '0') {
					room[j] = '1';
					break;
				}
			}
		} else if (s[i] == 'R') {
			for (int j = 9; j >= 0; j--) {
				if(room[j] == '0') {
					room[j] = '1';
					break;
				}
			}
		} else {
			room[s[i]-'0'] = '0';
		}
	}
	cout << room << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
