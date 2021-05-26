#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	int ans = 0;
	if (a>0) {a--;ans++;}
	if (b>0) {b--;ans++;}
	if (c>0) {c--;ans++;}
	if (b<c) {swap(b,c);}
	if (a<b) {swap(a,b);}
	if (a>0&&c>0) {a--;c--;ans++;}
	if (a>0&&b>0) {a--;b--;ans++;}
	if (b>0&&c>0) {b--;c--;ans++;}
	if (a>0&&b>0&&c>0) {a--;b--;c--;ans++;}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}


