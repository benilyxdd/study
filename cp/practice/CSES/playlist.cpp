#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
int ar[mxN];
int n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];
	
	int ans = 0;
	map<int, int> mp;
	for (int i = 0, j = 0; i < n; i++) {
		while(j < n && mp[ar[j]]<1) {
			mp[ar[j]]++;
			j++;
		}
		ans = max(ans, j-i);
		mp[ar[i]]--;
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

