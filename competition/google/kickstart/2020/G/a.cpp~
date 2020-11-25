#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX = (int) 1e5+5;

void solve() {
	string s;
	string s1 = "KICK", s2 = "START";
	cin >> s;
	map<int, int> m;
	int cnt = 0;
	size_t found = s.find(s2, 0);
	while(found != string::npos) {
		m[(int)found]++;
		found = s.find(s2, found+1);
	}	
	int xd = m.size();
	for (auto yo : m) {
		m[yo.first] = xd;
		xd--;
	}
	size_t found2 = s.find(s1, 0);
	while(found2 != string::npos) {
		for (auto yo : m) {
			if ((int)found2 < yo.first) {
				cnt += yo.second;
				break;
			
		}
		found2 = s.find(s1, found2+1);
	}
	cout << cnt << "\n";
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
