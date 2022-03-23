#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string a, b;
	cin >> a >> b;
	string A, B;
	for (int i = 0; i < a.size(); i++) {
		A += toupper(a[i]);
		B += toupper(b[i]);
	}
	string x;
	cin >> x;
	string ans;
	for (int i = 0; i < x.size(); i++) {
		if (isdigit(x[i])) {
			ans += x[i];
		} else if (isupper(x[i])) {
			int pos = (int)A.find(x[i]);
			ans += B[pos];
		} else if (islower(x[i])) {
			int pos = (int)a.find(x[i]);
			ans += b[pos];
		} 
	}
	cout << ans << "\n";
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
