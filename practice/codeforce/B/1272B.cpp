#include <bits/stdc++.h>
using namespace std;

#define ll long long
int cnt[4];

void solve() {
	memset(cnt, 0, sizeof(cnt));
	string s;
	cin >> s;
	for (char ch : s) {
		if (ch == 'U')
			cnt[0]++;
		else if (ch == 'D')
			cnt[1]++;
		else if (ch == 'L') 
			cnt[2]++;
		else if (ch == 'R')
			cnt[3]++;
	}
	int ud = min(cnt[0], cnt[1]);
	int lr = min(cnt[2], cnt[3]);
	
	int ans1;
	string ans2;
	
	if (ud == 0 && lr > 0) {
		ans1 = 2;
		ans2 = "LR";
	} else if (lr == 0 && ud > 0) {
		ans1 = 2; 
		ans2 = "UD";
	} else if (lr == 0 && ud == 0) {
		ans1 = 0;
		ans2 = "";
	} else {
		ans1 = 2*(ud+lr);
		for (int i = 0; i < lr; i++) 
			ans2 += 'L';
		for (int i = 0; i < ud; i++)
			ans2 += 'U';
		for (int i = 0; i < lr; i++)
			ans2 += 'R';
		for (int i = 0; i < ud; i++) 
			ans2 += 'D';
	}

	cout << ans1 << "\n";
	cout << ans2 << "\n";
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

