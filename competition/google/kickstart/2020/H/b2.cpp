#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll a, b, n;
ll dp[20][2];
vector<int> ar;
string x, y;

ll f(ll pos, bool tf) {
	//base case;
	if (pos >= n)
		return 1;
	
	//memor;
	if (dp[pos][tf] != -1) 
		return dp[pos][tf];
	
	//set limit;
	ll lim = 9;
	if (tf)
		lim = ar[pos];
	
	//dp(?
	ll res = 0;
	for (int i = 0; i <= lim; i++) {
		if (i%2 != pos%2) {
			if (i > 0 || pos > 0) {
				if (!tf || i < lim)
					res += f(pos+1, 0);
				else 
					res += f(pos+1, 1);
			}
		}
	}

	return dp[pos][tf] = res;
}

void solve() {
	//init;
	memset(dp, -1, sizeof(dp));
	ar.clear();

	//cin;
	cin >> a >> b;
	
	//cal f(b)-f(a-1), so dec a;
	a--;
	
	// cal f(b);
	while(b > 0) {
		ar.push_back(b%10);
		b/=10;
	}
	reverse(ar.begin(), ar.end());
	n = ar.size();
	
	ll ans1 = 0;
	for (int i = 0; i < n; i++) {
		ans1 += f(i, 1);
	}

	//reset;
	memset(dp, -1, sizeof(dp));
	ar.clear();

	//cal f(a-1);
	while(a > 0) {
		ar.push_back(a%10);
		a/=10;
	}
	reverse(ar.begin(), ar.end());
	n = ar.size();

	ll ans2 = 0;
	for (int i = 0; i < n; i++) {
		ans2 += f(i, 0);
	}

	//ans;
	cout << ans1-ans2 << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}
