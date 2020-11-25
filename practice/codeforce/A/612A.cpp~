#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	string s;
	cin >> s;
	for (int i = 0; i <=a/b; i++) {
		for (int j = 0; j <= a/c; j++) {
			if (i*b+j*c == a) {
				cout << i + j << "\n";
				for (int k = 0; k < i; k++) {
					string xd = s.substr(0+b*k, b);
					cout << xd << "\n";	
				}
				for (int k = i*b; k < a; k+=c){
					string xd = s.substr(k, c);
					cout << xd << "\n";
				}
				return;
			}
		}
	}
	cout << -1 << "\n";
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


