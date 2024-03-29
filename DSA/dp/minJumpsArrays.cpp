//https://www.geeksforgeeks.org/minimum-number-of-jumps-to-reach-end-of-a-given-array/

//https://www.geeksforgeeks.org/minimum-number-jumps-reach-endset-2on-solution/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
int n, ar[mxN], dp[mxN];

void input() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];
}

void f() {
	for (int i = 0; i < mxN; i++) {
		dp[i] = INT_MAX;
	}

	dp[0] = 0;
	for (int i = 1; i <= ar[0]; i++) {
		dp[i] = 1;
	}
	
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < ar[i]; j++) {
			dp[i+j] = min(dp[i+j], dp[i]+1);
		}
	}
}

int f2() {
	int step = ar[0], reach = ar[0], jump = 1;

	for (int i = 1; i < n; i++) {
		if (i == n-1) 
			return jump;
		
		reach = max(reach, ar[i]+i);
		step--;

		if (step == 0) {
			jump++;
			if (i >= reach) 
				return -1;
			step = reach-i;
		}
	}
}

void debug() {
	for (int i = 0; i < n; i++)
		cout << dp[i] << ' ';
	cout << '\n';
}

void solve() {
	input();
	f();
	//debug();
	cout << dp[n-1];
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

