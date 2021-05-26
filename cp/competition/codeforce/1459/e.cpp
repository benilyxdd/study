#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1001, mxM = (int)1e5+5;
int ma[mxN][mxN], n, m, pro[6];
string s;

void inverse_c() {
	array<int, 2> temp[n+1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			temp[n][1] = i;
			temp[n][0] = ma[j][i];
		}
		sort(temp, temp+n);
		for (int j = 1; j <= n; j++) {
			ma[j][i] = temp[i][1];
		}
	}
}
void inverse_r() {
	array<int, 2> temp[n+1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			temp[n][1] = j;
			temp[n][0] = ma[i][j];
		}
		sort(temp, temp+n);
		for (int j = 1; j <= n; j++) {
			ma[i][j] = temp[j][1];
		}
	}
}

void shift_up() {
	int	temp[n+1][n+1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			temp[i][j] = ma[i%n+1][j];
		}
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			ma[i][j] = temp[i][j];
}

void shift_down() {	
	int temp[n+1][n+1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			temp[i][j] = ma[(i-2)%n+1][j];
		}
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			ma[i][j] = temp[i][j];
}

void shift_left() {
	int temp[n+1][n+1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			temp[i][j] = ma[i][j%n+1];
		}
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			ma[i][j] = temp[i][j];
}

void shift_right() {
	int temp[n+1][n+1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			temp[i][j] = ma[i][(j-2)%n+1];
		}
	}
	for (int i = 1; i <= n; i++) 
		for (int j = 1; j <= n; j++)
			ma[i][j] = temp[i][j];
}

void solve() {
	//input
	memset(pro, 0, sizeof(pro));
	cin >> n >> m;
	for (int i = 1; i <= n; i++) 
		for (int j = 1; j <= n; j++)
			cin >> ma[i][j];
	cin >> s;
	
	//process string;
	for (int i = 0; i < m; i++) {
		if (s[i] == 'R')
			pro[0]++;
		else if (s[i] == 'L')
			pro[1]++;
		else if (s[i] == 'D')
			pro[2]++;
		else if (s[i] == 'U')
			pro[3]++;
		else if (s[i] == 'I')
			pro[4]++;
		else
			pro[5]++;
	}
	//process need to be done
	int mn = min(pro[0], pro[1]);
	int mn2 = min(pro[2], pro[3]);
	pro[0] -= mn;
	pro[1] -= mn;
	pro[0] %= n;
	pro[1] %= n;
	pro[2] -= mn2;
	pro[3] -= mn2;
	pro[2] %= n;
	pro[3] %= n;
	pro[4] %= 2;
	pro[5] %= 2;

	//matrix;
	for (int i = 0; i < pro[0]; i++) {
		shift_right();
	}
	for (int i = 0; i < pro[1]; i++) {
		shift_left();
	}
	for (int i = 0; i < pro[2]; i++) {
		shift_down();
	}
	for (int i = 0; i < pro[3]; i++) {
		shift_up();
	}
	for (int i = 0; i < pro[4]; i++) {
		inverse_r();
	}
	for (int i = 0; i < pro[5]; i++) {
		inverse_c();
	}

	//output
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << ma[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
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

