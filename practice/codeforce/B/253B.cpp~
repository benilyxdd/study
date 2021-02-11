#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 2e5+5;
const int mxC = 5001;
int cnt[mxC], ar[mxN], n;

void solve() {
	set<int> s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		cnt[ar[i]]++;
		s.insert(ar[i]);
	}
	
	int mn = mxN*10;
	for (const int& x : s) {
		int temp = 0;
		for (int i = 0; i <= 5000; i++) {
			if (i*2 < x || 2*x < i) {
				temp += cnt[i];
			}
		}
		if (temp != 0) 
			mn = min(mn, temp);
	}
	cout << (mn == mxN*10 ? 0 : mn);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

