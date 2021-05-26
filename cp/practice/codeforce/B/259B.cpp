#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool ok(vector<vector<int>>& vec) {
	set<int> s;
	for (int i = 0; i < 3; i++) {
		int sum = 0, sum2 = 0;
		for (int j = 0; j < 3; j++) {
			sum += vec[i][j];
			sum2 += vec[j][i];
		}
		s.insert(sum);
		s.insert(sum2);
	}
	s.insert(vec[0][0]+vec[1][1]+vec[2][2]);
	s.insert(vec[0][2]+vec[1][1]+vec[2][0]);

	return (s.size() == 1);
}

void solve() {
	vector<vector<int>> ar(3, vector<int>(3));
	for (int i = 0; i < 3; i++) 
		for (int j = 0; j < 3; j++)
			cin >> ar[i][j];

	for (int i = 1; i < (int)1e5+5; i++) {
		ar[0][0] = i;
		ar[1][1] = ar[0][0]+ar[0][2]-ar[2][1];
		ar[2][2] = ar[0][0]+ar[0][1]-ar[1][2];
		if (ok(ar)) {
			for (vector<int>& x : ar) {
				for (int& y : x) {
					cout << y << " ";
				}
				cout << "\n";
			}
			return;
		} else {
			ar[0][0] = ar[1][1] = ar[2][2] = 0;
		}
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

