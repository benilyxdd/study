#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	string a;
	cin >> a;
	int x = 0;
	string s = a;
	for (int i = 0; i < a.length(); i+=2) {
		if (s[i] == s[i+1]){
			if (s[i] == 'a') {
				s[i] = 'b';
				x++;
			} else {
				s[i] = 'a';
				x++;
			}
		}
	}
	cout << x << "\n";
	cout << s << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
