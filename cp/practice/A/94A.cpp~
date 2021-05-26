#include <bits/stdc++.h>
using namespace std;

#define ll long long
string pw[10];

void solve() {
	string s;
	cin >> s;
	for (int i = 0; i < 10; i++)
		cin >> pw[i];

	for (int i = 0; i < 8; i++) {
		string x = s.substr(10*i, 10);
		for (int j = 0; j < 10; j++) { 
			if (pw[j] == x) {
				cout << j;
			}
		}
	}
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


