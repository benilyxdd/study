#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	if (n%2==0){
		int x = n/2;
		while(x--){
			cout << 1;
		}
		cout << "\n";
	} else {
		int x = n/2-1;
		cout << 7;
		while(x--){
			cout << 1;
		}
		cout << "\n";
	}	
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


