#include <bits/stdc++.h>
using namespace std;

#define ll long long

//iterative fast expo
ll ipower(ll a, ll b) {
	ll ans = 1;
	while(b > 0) {
		if (b&1) {
			ans *= a;
		}

		a *= a;
		b /= 2;
	}
	return ans;
}

//recursive fast expo
ll rpower(ll a, ll b) {
	if (b == 0) return 1;
	
	ll temp = rpower(a, b/2);
	ll ans = temp*temp;
	if (b&1) {
		ans *= a;
	}
	return ans;
}

//recurrence relation = t(n) = t(n-1)+1;
void t(int n) {
	if (n > 0) {
		for (int i = 1; i <= n; i++)
			cout << i << " ";
		cout << "\n";
		t(n-1);
		t(n-1);
	}
}

void solve() {
	cout << ipower(2, 30);
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

