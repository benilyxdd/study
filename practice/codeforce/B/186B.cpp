#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1002;
array<int, 2> ar[mxN];
vector<array<double, 2>> ans;
int n, t1, t2, k;

bool cmp(array<double, 2>& a, array<double, 2>& b) {
	if (a[0] == b[0])
		return a[1] < b[1];
	return a[0] > b[0];
}

void solve() {
	cin >> n >> t1 >> t2 >> k;
	for (int i = 0; i < n; i++)
		cin >> ar[i][0] >> ar[i][1];
	
	for (int i = 0; i < n; i++) {
		sort(ar[i].begin(), ar[i].end());
	
		double temp = (double)(ar[i][0]*t1)*(100-k)/100;
		double temp2 = (double)(ar[i][1]*t1)*(100-k)/100;

		temp += (double)ar[i][1]*t2;
		temp2 += (double)ar[i][0]*t2;
		
		ans.push_back({max(temp, temp2), i+1});
	}
	
	sort(ans.begin(), ans.end(), cmp);
	for (array<double, 2>& x : ans) {
		cout << fixed << setprecision(0) << x[1] << " " << setprecision(2) << x[0] << "\n";
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

