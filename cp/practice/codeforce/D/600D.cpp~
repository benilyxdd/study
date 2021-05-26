#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	int d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	double g = (double)sqrt((a-d)*(a-d) + (b-e)*(b-e));
	double aan = acos((c*c+g*g-f*f)/(2*c*g)) *180/M_PI;
	double ban = acos((g*g+f*f-c*c)/(2*g*f)) *180/M_PI;
	double aa = (c*c*M_PI)/360*2*aan; // M_PI*c*c
	double ba = (f*f*M_PI)/360*2*ban; // M_PI*f*f
	double big = f*g*sin(ban);
	cout << fixed << setprecision(20) << aa+ba-big << "\n";
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


