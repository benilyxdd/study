#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	string s = bitset<32>(n).to_string();
	vector<int> v;
	for (int i = 31; i >= 0; i--) {
		if (s[i] == '1') {
			v.push_back(32-i);
		}
	}
	reverse(v.begin(), v.end());
	for(int& a : v) {
		cout << a << " ";
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


