#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
	int n;
	string s;
	cin >> n >> s;
	string a;
	for (int i = 0; i < n; i++) {
		a += s[i];
		int x = a.length();
		if (x >= 3) {
			string xd = a.substr(x-3, 3);
			if (xd == "fox")
			a.erase(x-3, 3);
		}
	}
	cout << a.length() << "\n";
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
