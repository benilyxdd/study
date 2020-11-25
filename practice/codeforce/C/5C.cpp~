#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MAX = (int)1e6+6;
int a[MAX], b[MAX], c[MAX];

void solve() {
	string s;
	stack<int> ss;
	cin >> s;
	int mx = 0;
	c[0] = 1;

	int len = s.length();
	for (int i = 0; i < len; i++) {
		if (s[i] == '(') {
			ss.push(i);
		} else {
			if (ss.empty()) {
				a[i] = b[i] = -1;
			} else {
				int temp = ss.top();
				ss.pop();

				a[i] = b[i] = temp;
				
				if (s[temp-1] == ')' && a[temp-1] >= 0 && temp > 0)
					b[i] = b[temp-1];

				c[i-b[i]+1]++;
				mx = max(mx, i-b[i]+1);
			}
		}
	}
	cout << mx << " " << c[mx] << "\n";
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

