#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {	
	bool open = true;
    
    char c;
    while(1) {
		c = cin.get();
		if(cin.eof())
		    break;
		if(c == '"') {
	   		if(open)
				cout << "``";
		    else
				cout << "''";
	   		open = !open;
		} else
	    	cout << c;
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


