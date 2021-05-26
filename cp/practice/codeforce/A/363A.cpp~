#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	vector<string> v;
	v.push_back("O-|-OOOO");
	v.push_back("O-|O-OOO");
	v.push_back("O-|OO-OO");
	v.push_back("O-|OOO-O");
	v.push_back("O-|OOOO-");
	v.push_back("-O|-OOOO");
	v.push_back("-O|O-OOO");
	v.push_back("-O|OO-OO");
	v.push_back("-O|OOO-O");
	v.push_back("-O|OOOO-");
	vector<string> ans;
	char a;
	while(cin>>a){
		ans.push_back(v[a-'0']);
	}
	reverse(ans.begin(), ans.end());
	for (string x : ans) {
		cout << x << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
