#include <bits/stdc++.h>
using namespace std;

#define ll long long
int ar[3][4];
int mem[3][4];
int call;

//recursion
int f(int a, int b) {
	if (mem[a][b] != -1)
		return mem[a][b];
	
	call++;
	if (a == 0 && b == 0)
		return mem[a][b] = ar[a][b];
	
	if (a == 0)
		return mem[a][b] = f(a, b-1)+ar[0][b];
	if (b == 0)
		return mem[a][b] = f(a-1, b)+ar[a][0];

	int ans = ar[a][b];
	ans += min(f(a-1, b), f(a, b-1));
	
	return mem[a][b] = ans;
}

void solve() {
	memset(mem, -1, sizeof(mem));
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			cin >> ar[i][j];
	
	//dp
	int dp[3][4];
	dp[0][0] = ar[0][0];
	for (int i = 1; i < 4; i++) 
		dp[0][i] = ar[0][i]+dp[0][i-1];
	for (int i = 1; i < 3; i++) 
		dp[i][0] = ar[i][0]+dp[i-1][0];

	for (int i = 1; i < 3; i++) {
		for (int j = 1; j < 4; j++) {
			//diagonally as well
			dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]})+ar[i][j];
		}
	}
	cout << dp[2][3] << "\n";

	//recursion
	cout << f(2, 3) << " call: " << call << "\n";
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

