#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	if (a == 9 && b == 1) {
		cout << 9 << " " << 10 << "\n";
	} else if (a == b){
		cout << a*10 << " " << a*10+1 << "\n";
	} else if (b-a != 1) {
		cout << -1 << "\n";
	} else {
		cout << a << " " << b << "\n";
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


