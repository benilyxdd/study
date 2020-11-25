#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n;
	string s;
	cin >> n >> s;
	queue<pair<int, int>> q;
	for (int i = 0; i < n*2; i+=2) {
		q.push({s[i]-'0', s[i+1]-'0'});
	}
	int a = 0, b = 0;
	for (int i = 0; i < n; i++) {
		if (q.front().first == 1) {
			a++;
		}
		if (q.front().second == 1) {
			b++;
		}
		q.pop();
		cout << "size: " << q.size() << "\n";
		cout << "A: " << a << "\n";
		cout << "B; " << b << "\n";
		if (a-b>q.size() || b-a>q.size()) {
			cout << (i+1)*2 << "\n";
			break;
		}
	}
}

signed main() {
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

