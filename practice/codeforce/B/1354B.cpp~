#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;

	int n = s.length();
	int mn = (int)1e7;
	
	set<char> check;
	for (char& x : s) {
		check.insert(x);
	}

	if (check.size() < 3) {
		cout << 0 << '\n';
		return;
	}
	

	for (int i = 0; i < n; i++) {
		int size = 1;	
		char first = s[i];
		
		while (s[i+1] == first && i < n) {
			i++;
		}
		if (i == n-1) {
			break;
		}
	
		char second = s[i+1];
		int j = i + 1;

		while (s[j] == second && j < n) {
			j++;
		}
		if (j == n) {
			break;
		}
		//cout << "J: " << j << '\n';

		char third = s[j];
		size += j - i;
		//cout << "size: " << size << '\n';

		if (first != third) {
			mn = min(mn, size);
		}

		i = j - 2;
	}
	cout << mn << '\n';
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

