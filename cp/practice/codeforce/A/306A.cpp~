#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	if(a%b==0) {
		for (int i = 0; i < b; i++) {
			cout << a/b << " ";
		}
	} else {
		for (int i = 0; i < b-a%b; i++){
			cout << a/b << " ";
		}
		for (int i = 0; i < a%b; i++) {
			cout << a/b+1 << " ";
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
