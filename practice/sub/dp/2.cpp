#include <bits/stdc++.h>
using namespace std;

#define ll long long

void f(int n, int now, vector<int>& vec) {
	if (now == n)
		return;

	vec[now] = vec[now-1]+vec[now];
	f(n, now+1, vec);
}

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	f(n, 1, ar);
	for (int& x : ar) {
		cout << x << " ";
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

