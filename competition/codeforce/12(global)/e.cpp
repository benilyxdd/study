#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 201, mxM = 2001;
int n, m, p1, p2, tf;
vector<array<int, 2>> tie, ntie;
bool 

bool cycle() {

}

void solve() {
	//input
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> p1 >> p2 >> tf;
		if (tf)
			tie.push_back({p1, p2});
		else
			ntie.push_back({p1, p2});
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

