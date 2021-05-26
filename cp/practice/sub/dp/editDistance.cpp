#include <bits/stdc++.h>
using namespace std;

#define ll long long
int call, call2;

//recusion
int edit(char* str1, char* str2) {
	call++;
	if (str1 == NULL || *str1 == '\0') 
		return strlen(str2);

	if (str2 == NULL || *str2 == '\0')
		return strlen(str1);

	if (*str1 == *str2) 
		return edit(str1+1, str2+1);

	int del = edit(str1+1, str2);
	int upd = edit(str1+1, str2+1);
	int ins = edit(str1, str2+1);

	return min({del, upd, ins})+1;
}

//dp
int edit2(char* str1, char* str2, int n, int m) {
	int dp[n+1][m+1];
	
	for (int i = 0; i <= n; i++) {
		dp[i][0] = i;
	}
	for (int i = 0; i <= m; i++) {
		dp[0][i] = i;
	}
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			call2++;
			if (str1[i-1] == str2[j-1]) {
				dp[i][j] = dp[i-1][j-1];
			} else {
				dp[i][j] = min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]}) + 1;
			}
		}
	}
	return dp[n][m];
}

void solve() {
	char a[100000], b[100000];
	cin >> a >> b;
	cout << edit(a, b) << " call: " << call << '\n';
	cout << edit2(a, b, strlen(a), strlen(b)) << " call: " << call2 << '\n';
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

