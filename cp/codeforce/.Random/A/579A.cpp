#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
void solve() {
	int n;
	cin >> n;
	int ans = 0;
	string s = bitset<64>(n).to_string();
	for (char& c : s) {
		if (c == '1') {
			ans++;
		}
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
 
 
