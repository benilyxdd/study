#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int s = 0, s1 = 0;
	while(n>0) {
		int temp = n%10;
		if (temp&1) {
			s+=temp;
		} else {
			s1+=temp;
		}
		n/=10;
	}
	if (s%3 == 0 || s1%4 == 0) {
		cout << "Yes ";
	} else {
		cout << "No ";
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

