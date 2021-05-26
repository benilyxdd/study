#include <bits/stdc++.h>
using namespace std;

#define ll long long

void f(int a, int b, int c, int n) {
	if (n == 0)
		return;

	f(a, c, b, n-1);
	printf("Move Disk From %d to %d\n", a, b);
	f(c, b, a, n-1);
}

void solve() {
	int n;
	cin >> n;
	f(1, 2, 3, n);
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

