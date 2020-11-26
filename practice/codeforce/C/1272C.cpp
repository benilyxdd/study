#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
int n, k;
char ch;
bool av[26];
string s;

void solve() {
	memset(av, false, sizeof(av));
	cin >> n >> k >> s;
	for (int i = 0; i < k; i++) {
		cin >> ch;
		av[ch-'a'] = 1;
	}
	/*
	for (int i = 0; i < n; i++) {
		if (av[s[i]-'a'] == 1) 
			s[i] = '1';
		else 
			s[i] = '0';
	}
	*/

	ll ans = 0;
	for (int i = 0; i < n; i++) {
		int j = i;
		while(j < n && av[s[j]-'a']) 
			j++;
		int len = j-i;
		ans += 1LL*(len)*(len+1)/2;
		i = j;
	}
	cout << ans << "\n";
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

