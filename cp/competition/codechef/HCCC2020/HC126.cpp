#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1000001;
int ar[mxN], n;
map<int, int> m;
vector<int> v;

bool cmp(pair<int ,int>& a, pair<int, int>& b) {
	return a.second > b.second;
}

pair<int, int> ms(map<int, int>& M) {
	vector<pair<int, int>> xd;
	for (auto& it : M) 
		xd.push_back(it);

	sort(xd.begin(), xd.end(), cmp);
	for (int i = 1; i < xd.size(); i++)
		for (int j = 0; j < xd[i].second; j++) 
			v.push_back(xd[i].first);
	return xd[0];
}	

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		m[ar[i]]++;
	}
	
	pair<int, int> x = ms(m);
	if (x.second > n/2) {
		cout << "No\n";
	} else {
		cout << "Yes\n";
		for (int& yo : v) {
			if (x.second > 0) {
				x.second--;
				cout << x.first << " ";
			}
			cout << yo << " ";
		}
		cout << "\n";
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

