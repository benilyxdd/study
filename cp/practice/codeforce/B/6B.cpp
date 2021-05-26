#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 102;
char ar[mxN][mxN], c;
int n, m;
set<int> s;

void f(int i, int j) {
	vector<char> v;
	v.push_back(ar[i-1][j]);
	v.push_back(ar[i+1][j]);
	v.push_back(ar[i][j+1]);
	v.push_back(ar[i][j-1]);
	
	for (char& x : v) {
		if (isalpha(x) && x != c) {
			s.insert(x);
		}
	}
}

void solve() {
	cin >> n >> m >> c;
	memset(ar, ' ', sizeof(ar));
	for (int i = 1; i <= n; i++) 
		for (int j = 1; j <= m; j++)
			cin >> ar[i][j];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (ar[i+1][j+1] == c) {
				f(i+1, j+1);			
			}
		}
	}

	cout << s.size();
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

