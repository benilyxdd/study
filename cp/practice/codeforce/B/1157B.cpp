#include <bits/stdc++.h>
using namespace std;

#define ll long long
int xd[10], n;
string s;
bool a[10], b[10];

void solve() {
	cin >> n >> s;
	for (int i = 1; i <= 9; i++) {
		cin >> xd[i];
		a[i] = (xd[i] > i);
		b[i] = (xd[i] >= i);
	}

	for (int i = 0; i < n; i++) {
		int x = s[i]-'0';
		if (a[x]) {
			int len = 1;
			while(i+len < n) {
				if (b[s[i+len]-'0']) {
					len++;
				} else {
					break;
				}
			}

			for (int j = i; j < i+len; j++)
				s[j] = xd[s[j]-'0']+'0';

			break;
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

