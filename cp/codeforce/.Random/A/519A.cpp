#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a = 0, b = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			char c;
			cin >> c;
			if (isalpha(c)) {
				if (isupper(c)) {
					if (c == 'Q') {
						a+=9;
					} else if (c == 'R') {
						a+=5;
					} else if (c == 'B'|| c == 'N') {
						a+=3;
					} else if (c == 'P') {
						a+=1;
					}
				} else {
					if (c == 'q') {
						b+=9;
					} else if (c == 'r') {
						b+=5;
					} else if (c == 'b' || c == 'n') {
						b+=3;
					} else if (c == 'p') {
						b+=1;
					}
				}
			}
		}
	}
	if (a == b) {
		cout << "Draw\n";
	} else if (a > b) {
		cout << "White\n";
	} else {
		cout << "Black\n";
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


