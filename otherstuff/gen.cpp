#include <iostream>
using namespace std;

const long long int MOD = (long long int)1e15 + 5;

int main() {
	freopen("tc2.txt", "w", stdout);
	int n;
	cin >> n;
	cout << n << '\n';
	for (int i = 0; i < n; i++) {
		long long int ar[4];
		for (int j = 0; j < 4; j++) {
			ar[j] = rand();
		}
		long long int a = (ar[0] * ar[1]) % MOD;
		long long int b = (ar[2] * ar[3]) % MOD;
		cout << a << " + " << b << '\n';
	}
	return 0;
}