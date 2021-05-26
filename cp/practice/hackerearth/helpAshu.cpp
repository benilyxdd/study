#include <bits/stdc++.h> 
using namespace std;

const int mxN = (int)2e5+5;
int ar[mxN], n, m, a, b, c;
array<int, 2> st[mxN*4];

void make(int si, int ss, int se) {
    if (ss == se) {
        if (ar[ss]&1) {
            st[si] = {1, 0};
        } else {
            st[si] = {0, 1};
        }
        return;
    }

    int mid = (ss+se)/2;

    make(si*2, ss, mid);
    make(si*2+1, mid+1, se);

    st[si][0] = st[si*2][0]+st[si*2+1][0];
    st[si][1] = st[si*2][1]+st[si*2+1][1];
}

void update(int si, int ss, int se, int qi) {
    if (ss == se) {
        if (c&1) {
            st[si] = {1, 0};
        } else {
            st[si] = {0 ,1};
        }
        ar[qi] = c;
        return;
    }

    int mid = (ss+se)/2;

    if (qi <= mid) {
        update(si*2, ss, mid, qi);
    } else {
        update(si*2+1, mid+1, se, qi);
    }

    st[si][0] = st[si*2][0]+st[si*2+1][0];
    st[si][1] = st[si*2][1]+st[si*2+1][1];
}

int get(int si, int ss, int se, int qs, int qe, int which) {
    if (ss > qe || se < qs) {
        return 0;
    }

    if (ss >= qs && se <= qe) {
        if (which == 2) 
            return st[si][0];
        else 
            return st[si][1];
    }

    int mid = (ss+se)/2;

    int l = get(2*si, ss, mid, qs, qe, which);
    int r = get(2*si+1, mid+1, se, qs, qe, which);

    return l+r;
}

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> ar[i];

    make(1, 1, n);

    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> a >> b >> c;
        if (a == 0) {
            update(1, 1, n, b);
        } else if (a == 1) {
            x = get(1, 1, n, b, c, 1);
        } else {
            x = get(1, 1, n, b, c, 2);
        }
        if (a != 0)
			cout << x << "\n";
    }
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

    int t = 1;
    while(t--)
        solve();
    return 0;
}
