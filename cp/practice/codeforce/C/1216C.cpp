#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Rect {
	int x1, y1, x2, y2;
	Rect() {
		x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	};

	Rect(int a, int b, int c, int d) {
		x1 = a, y1 = b, x2 = c, y2 = d;
	};

	ll area() {
		return 1ll * abs(y2 - y1) * abs(x2 - x1);
	};

	void print() {
		cout << x1 << ' ' << y1 << ' ' << x2 << ' ' << y2 << '\n';
	};
};

ll inter(Rect a, Rect b) {
	int x = max(0, min(a.x2, b.x2) - max(a.x1, b.x1));
	int y = max(0, min(a.y2, b.y2) - max(a.y1, b.y1));
	return (ll)x * y;
}

Rect intersect(Rect a, Rect b) {
	int i = max(min(a.x1, a.x2), min(b.x1, b.x2));
	int j = max(min(a.y1, a.y2), min(b.y1, b.y2));
	int k = min(max(a.x1, a.x2), max(b.x1, b.x2));
	int p = min(max(a.y1, a.y2), max(b.y1, b.y2));

	if (k <= i || p <= j) {
		return Rect();
	}
	return Rect(i, j, k, p);
}

void solve() {
	Rect a, b, c;
	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	cin >> c.x1 >> c.y1 >> c.x2 >> c.y2;

	Rect inter_a_b = intersect(a, b);
	Rect inter_a_c = intersect(a, c);
	Rect black_inter_in_white = intersect(inter_a_b, inter_a_c);

	ll total_black_area_in_white = inter_a_b.area() + inter_a_c.area() - black_inter_in_white.area();
	ll white_area = a.area();
	
	if (white_area - total_black_area_in_white) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
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

