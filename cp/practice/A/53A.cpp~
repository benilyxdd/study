#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
string s, ar[mxN];
int n;

void solve() {
	cin >> s >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	
	int len = s.length();
	sort(ar, ar+n);
	for (int i = 0; i < n; i++) {
		string temp = ar[i].substr(0, len);
		if (temp == s) {
			cout << ar[i] << "\n";
			return;
		}
	}
	cout << s;
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


