#include <bits/stdc++.h>
using namespace std;

#define ll long long
int a;

void f(int n) {
	if (n == 0)
		return;

	f(n-1);
	printf("%d * %d = %d\n", n, a, (n*a));
}

void solve() {
	int n;
	cin >> a >> n;
	f(n);
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

