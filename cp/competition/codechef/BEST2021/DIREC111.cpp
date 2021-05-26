#include <bits/stdc++.h>
using namespace std;

#define ll long long
vector<char> dir = {'E', 'S', 'W', 'N'};

void solve() {
	int n, start = 3;
	cin >> n;
	vector<int> ar(n);
	for (int &x : ar) {
		cin >> x;
	}
	for (int &x : ar) {
		if (x > 0) {
			start++;
			start %= 4;
		} else if (x < 0) {
			start--;
			if (start == -1) {
				start = 3;
			}
			start %= 4;
		}
	}
	cout << dir[start] << '\n';
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

