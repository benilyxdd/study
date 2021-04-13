#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> ar = {1, 5, 6, 7, 3, 8, 10, 4, 30};
    // sort(ar.begin(), ar.end());
    auto it = lower_bound(ar.begin(), ar.end(), 7);
    cout << it - ar.begin() << '\n';
}