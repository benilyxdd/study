#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int cnt[1001] = {0};
	set<int> s;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		cnt[a]++;
		s.insert(a);
	}
	int mx = *max_element(cnt, cnt+1001);
	cout << mx << " "  << s.size() << "\n";
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


