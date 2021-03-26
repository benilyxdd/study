#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	
	for (int i = 1; i <= 10; i++) {
		int max = i*(i+1)/2;
		int min = i-1;
		for (int j = min; j < max; j++) {
			cout << i << ' ' << j << '\n';
		}
	}

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt", "w", stdout);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

