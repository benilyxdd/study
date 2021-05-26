#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
array<int, 2> water[mxN];
int n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> water[i][0] >> water[i][1];


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

