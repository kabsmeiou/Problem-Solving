#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int ans = 0;
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        if (x1 != x2) {
            cout << abs(x2 - x1) * abs(x2 - x1) << '\n';
        } else {
            cout << abs(x3 - x1) * abs(x3 - x1) << '\n';
        }
    }
}