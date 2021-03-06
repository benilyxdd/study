#include <iostream>
using namespace std;

int main() {
	freopen("input.txt", "w", stdout);
	cout << 10 << '\n';
	for (int i = 0; i < 10; i++) {
		cout << "10 10\n";
		cout << '0' << i << ':' << '0' << i << '\n';
	}
}
