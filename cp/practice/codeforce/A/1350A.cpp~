#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	if (a % 2 == 0) {
		cout << a+2*b << "\n";
		return;
	}
	int x = 0;
	for (int i = a; i >= 2; i--) {
		if(a%i==0) {
			x = i;
		}
	}
	cout << a+x+2*(b-1) << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
