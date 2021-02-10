#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string a, b;
	cin >> a >> b;
	int len = a.length(); 
	int cnta = 0, cntb = 0;
	for (int i = 0; i < len; i++) {
		if (a[i] == '+') {
			cnta++;
		} else {
			cntb++;
		}
	}

	int cnta1 = 0, cnta2 = 0, q = 0;
	for (int i = 0; i < len; i++) {
		if (b[i] == '+') {
			cnta1++;
		} else if (b[i] == '-') {
			cnta2++;
		} else {
			q++;
		}
	}

	int ori = cnta-cntb, now = cnta1-cnta2;
	int diff = ori-now;
	if (now+q < ori) {
		cout << fixed << setprecision(15) << (double)0;
	} else {
		int cnt = 0;
		for (int i = 0; i < (1 << q); i++) {
			int temp = __builtin_popcount(i);
			int temp2 = q-temp;
			//cout << temp << " " << temp2 << "\n";
			if (temp2-temp == diff) {
				cnt++;
			}
		}	
		double all = 1 << q;
		double ans = (double)cnt/all;
		cout << fixed << setprecision(15) << ans << "\n";
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

