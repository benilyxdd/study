#include <bits/stdc++.h>
using namespace std;

#define ll long long
int cnt[127];

void solve() {
	string s;
	while(getline(cin ,s)) {
		memset(cnt, 0, sizeof(cnt));
		for (char& x : s) {
			if (x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z') {
				cnt[x]++;
			}
		}
		int mx = *max_element(cnt, cnt+127);
		for (int i = 0; i < 127; i++) {
			if (cnt[i] == mx && mx != 0) {
				cout << (char)i;
			}
		}
		cout << " " << mx << "\n";
	}
}

int main() {
	ios::sync_with_stdio(1);
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


