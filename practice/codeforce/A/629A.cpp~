#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	 int n;
	 cin >> n;
	 char xd[n][n];
	 for (int i = 0; i < n; i++) {
		 for (int j = 0; j < n; j++) {
			 cin >> xd[i][j];
		 }
	 }

	 int cnt = 0;
	 for (int i = 0; i < n; i++) {
		 int temp1 = 0, temp2 = 0;
		 for (int j = 0; j < n; j++) {
			 if (xd[i][j] == 'C') {
				 temp1++;
			 }
			 if (xd[j][i] == 'C') {
				 temp2++;
			 }
		 }
		 cnt += temp1*(temp1-1)/2;
		 cnt += temp2*(temp2-1)/2;
	 }
	 cout << cnt << "\n";
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


