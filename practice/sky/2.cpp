#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool tf[3];
vector<vector<int>> vv;

void ini() {
	for (int i = 0; i < 3; i++) {
		vector<int> temp;
		for (int j = 0; j < 9; j++) {
			temp.push_back(j);
		}
		vv.push_back(temp);
	}
}

void print() {
	//print ABC;
	for (int i = 0; i < 3; i++) {
		if (tf[i] == false && i != 2) {
			cout << char('A'+i) << "      ";
		} else if (tf[i] == false && i == 2) {
			cout << (char)'C';
		}
	}
	//print number;
	
}

void check() {
	
}

void play() {

}

void solve() {
	ini();
	print();
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

