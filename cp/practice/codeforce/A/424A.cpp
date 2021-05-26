#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, cnt = 0;
	string s;
	cin >> n >> s;
	for (int i = 0; i < n; i++) 
		if (s[i] == 'x')
			cnt++;
	
	cout << abs(cnt-n/2) << "\n";
	int t = abs(cnt-n/2);
	if (cnt > n/2) {
		for (int i = 0; i < n && t; i++) {
			if (s[i] == 'x') {
				s[i] = 'X';
				t--;
			}
		}
	} else {
		for (int i = 0; i < n && t; i++) {
			if (s[i] == 'X') {
				s[i] = 'x';
				t--;
			}
		}
	}
	cout << s;
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


