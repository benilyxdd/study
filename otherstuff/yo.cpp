#include <vector>
#include <iostream>
using namespace std;

int main() {
    const vector<int> ar = {1, 2, 3};
    for (const int& x : ar) {
        cout << x << ' ';
    }
}