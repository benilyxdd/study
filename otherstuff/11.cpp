#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(int a[], int b[], int c[], int d) {
	for (int i = d-1; i >= 0; i--) {
		a[i] = 2;
		b[i] = 3;
		c[i] = 4;
	}

	for (int i = 0; i < d; i++) {
		cout << a[i] << ' ' << b[i] << ' ' << c[i] << ' ';
	}
}

int main() {
	int a[] = {1, 2, 3};
	int b[] = {3, 4, 5};
	int c[] = {5, 6, 7};
	solve(a, b, c, 3);
	return 0;
}

