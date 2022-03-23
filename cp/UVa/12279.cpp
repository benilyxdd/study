#include <bits/stdc++.h>
using namespace std;

#define ll long long
int x;

void solve() {
	int i = 1;
	while(cin >> x) {
		if (x == 0)
			break;
		cout << "Case " << i << ": ";
		int cnt = 0;
		for (int i = 0; i < x; i++) {
			int a;
			cin >> a;
			if (a == 0) 
				cnt--;
			else
				cnt++;
		}
		cout << cnt << "\n";
		
		i++;
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


