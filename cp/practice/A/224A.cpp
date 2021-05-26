#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	vector<int> v(3);
	for (int i = 0; i < 3; i++) 
		cin >> v[i];

	int a = sqrt(v[0]*v[1]/v[2]);
	int b = sqrt(v[0]*v[2]/v[1]);
	int c = sqrt(v[1]*v[2]/v[0]);
	int x = a+b+c;
	cout << 4*x;
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


