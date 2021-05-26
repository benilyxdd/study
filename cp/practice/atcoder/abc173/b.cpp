#include <bits/stdc++.h>
using namespace std;

#define ll long long
vector<string> out {"AC", "WA", "TLE", "RE"};
int cnt[4], n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		string x;
		cin >> x;
		if (x == out[0])
			cnt[0]++;
		else if (x == out[1])
			cnt[1]++;
		else if (x == out[2])
			cnt[2]++;
		else if (x == out[3])
			cnt[3]++;
	}
	for (int i = 0; i < 4; i++) 
		cout << out[i] << " x " << cnt[i] << "\n";
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

