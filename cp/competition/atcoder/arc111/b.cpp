#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)200001;
int n, cnt[400001];
array<int, 4> ar[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ar[i][1] >> ar[i][2];		
		cnt[ar[i][1]]++;
		cnt[ar[i][2]]++;
	}
	for (int i = 0; i < n; i++) {
		ar[0] = 
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

