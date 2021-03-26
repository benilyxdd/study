#include <bits/stdc++.h>
using namespace std;

#define ll long long

float ran() {
	return ((float)rand())/float(RAND_MAX) * 6.00 - 3.00;
}

void solve() {
	int p;
	float player[100];
	string ar[10001];
	for (int i = 0; i < 10000; i++) {
		cin >> ar[i];
	}

	for (int i = 0; i < 100; i++) {
		player[i] = ran();
	}

	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("ein.txt", "r", stdin);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

