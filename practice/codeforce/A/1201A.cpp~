#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	vector<string> v;
	for (int i = 0; i < a; i++) {
		string s;
		cin >> s;
		v.push_back(s);	
	}
	vector<int> v1;
	for (int i = 0; i < b; i++) {
		int s;
		cin >> s;
		v1.push_back(s);
	}

	int ans = 0;
	int pt[5] = {0};
	for (int i = 0; i < b; i++) {
		int mx = 0;
		for (int j = 0; j < a; j++) {
			pt[v[j][i]-'A']++;
		}

		for (int j = 0; j < 5; j++) {
			mx = max(mx, pt[j]);
		}
		memset(pt, 0x00, 20);
		ans += mx*v1[i];
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


