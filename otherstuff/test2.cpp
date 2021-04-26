#include <iostream>
using namespace std;

int res2(int i, int x) {
    if (i == x) {
        return 0;
    } else {
        int y;
        scanf("%d", &y);

        int res;
        if (y > 0) {
            res = y * y;
        } else {
            res = 0;
        }
        return res2(i + 1, x) + res;
    }
}

void res(int i,int tt) {
    if (i == tt) {
        return;
    } else {
        int x;
        scanf("%d", &x);

        int sum = 0;
        sum += res2(0, x);
        printf("%d ", sum);

        res(i + 1, tt);
    }
}

int main() {
    int tt;
    scanf("%d", &tt);

    res(0, tt);
}