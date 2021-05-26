#include <bits/stdc++.h>
using namespace std;

#define ll long long
int a, b;
int c[1001];
string x, y;
ll dp[11][100][2];

ll f(int pos, int n, ll sum, bool tf) {
	if (pos > n) 
		return sum;

	if (dp[pos][sum][tf] != -1)
		return dp[pos][sum][tf];

	ll res = 0;
	int lim = 9;
	if (!tf) 
		lim = c[pos-1];
	
	for (int i = 0; i <= lim; i++) {
		if (tf || i < lim)
			res += f(pos+1, n, sum+i, 1);
		else
			res += f(pos+1, n, sum+i, 0);
	}

	return dp[pos][sum][tf] = res;

}

void solve() {

	while(1) {
		cin >> a >> b;
		memset(dp, -1, sizeof(dp));
		a--;
		x = to_string(a);
		y =	to_string(b);
		for (int i = 0; i < y.size(); i++)
			c[i] = y[i]-'0';
		if (a == -1 || b == -1)
			break;
		ll ans = f(1, y.size(), 0, 0);
		memset(dp, -1, sizeof(dp));
		memset(c, 0, sizeof(c));
		for (int i = 0; i < x.size(); i++) 
			c[i] = x[i]-'0';
		ans -= f(1, x.size(), 0 , 0); 
		cout << ans << "\n";
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

