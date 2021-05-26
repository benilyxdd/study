#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	int bottle = (a-1)*(2*b+1);
	int towel = a*c;
	cout << bottle << " " << towel << "\n";
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


