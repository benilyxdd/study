#include <bits/stdc++.h>
using namespace std;

#define ll long long
int ar[26];

void solve() {
	int a, b;
	cin >> a >> b;
	if (b < a) {
		cout << "-1\n";
	} else {
		memset(ar, 0, sizeof(ar));
		string s = bitset<32>(b).to_string();
		reverse(s.begin(), s.end());
		int cnt = 0;
		for (int i = 0; i < 32; i++) {
			if (s[i] == '1') {
				ar[i] = 1;
				cnt++;
			}
		}
		int left = a-cnt;
		if (left < 0) {
			cout << "-1\n";
			return;
		}
		while(left > 0) {
			for (int i = 26; i >= 0; i--) {
				if (ar[i] > 0) {
					ar[i]--;
					ar[i-1] += 2;
					left--;
					break;
				}
			}
		}
		
		for (int i = 0; i < 26; i++) {
			for (int j = 0; j < ar[i]; j++) {
				cout << char('a'+i);
			}
		}
		cout << "\n";
	}
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

