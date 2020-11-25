#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	char xd[a][b];
	for (int i = 0;i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> xd[i][j];
		}
	}
	
	set<pair<char, char>> s;
	for (int i = 1; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (xd[i-1][j] != xd[i][j]) {
				s.insert({xd[i-1][j], xd[i][j]});
			}	
		}
	}
	

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}
