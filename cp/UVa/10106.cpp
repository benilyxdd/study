#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s1, s2;
	while(cin >> s1) {
		cin >> s2;
		reverse(s1.begin(), s1.end());
		reverse(s2.begin(), s2.end());
		int a[1000];
		memset(a, 0, sizeof(a));
		for (int i = 0; i < s1.length(); i++) {
			for (int j = 0; j < s2.length(); j++) {
				a[i+j] += (s1[i]-'0')*(s2[j]-'0');
			}
		}

		for (int i = 0; i < 1000-1; i++) {
			a[i+1] += a[i]/10;
			a[i] %= 10;
		}
		int i = 999;
		while(i > 0 && a[i] == 0) {
			i--;
		}
		for (; i >= 0; i--) {
			cout << a[i];
		}
		cout << "\n";
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


