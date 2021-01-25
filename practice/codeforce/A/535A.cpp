#include <bits/stdc++.h>
using namespace std;

#define ll long long
string ar[10] = {"zero", "one", "two", "three", "four", "five", "six",
				"seven", "eight", "nine"};
string ar2[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
				"fifteen", "sixteen", "seventeen", "eighteen", 
				"nineteen"};
string ar3[10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", 
				"seventy", "eighty", "ninety"};

void solve() {
	int n;
	cin >> n;
	if (n < 10) {
		cout << ar[n];
	} else if (n > 9 && n < 20) {
		cout << ar2[n%10];
	} else {
		int temp = n%10;
		n /= 10;
		cout << ar3[n];
		if (temp != 0) {
			cout << '-' << ar[temp];
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


