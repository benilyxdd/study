#include <iostream>
using namespace std;

void solve() {
	int mx = 0;
	for (int a = 1; a <= 63; a++) {
		for (int b = 1; b <= 63; b++) {
			for (int c = 1; c <= 63; c++) {
				for (int d = 1; d <= 63; d++) {
					if (a+b+c+d == 63) {
						int x = a*b+b*c+c*d;
						mx = max(mx, x);
					}
				}
			}
		}
	}
	cout << m;
}

int main() {
	solve();
}
