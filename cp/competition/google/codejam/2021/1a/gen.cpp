#include <iostream>;
using namespace std;

int main() {
    freopen("input.txt", "w", stdout);
    cout << 1 << '\n';
    int n;
    cin >> n;
    cout << n << '\n';
    for (int i = 0; i < n; i++) {
        cout << (int) n - i + 1 << ' ';
    }
}
