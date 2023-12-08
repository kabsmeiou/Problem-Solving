#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int x, y, xx, yy;
        cin >> x >> y >> xx >> yy;
        int cnt1, cnt2;
        if (x == 1 || x == n) {
            if (y == 1 || y == m) {
                cnt1 = 2;
            } else {
                cnt1 = 3;
            }
        } else if (y == 1 || y == m) {
            cnt1 = 3;
        } else {
            cnt1 = 4;
        }
        if (xx == 1 || xx == n) {
            if (yy == 1 || yy == m) {
                cnt2 = 2;
            } else {
                cnt2 = 3;
            }
        } else if (yy == 1 || yy == m) {
            cnt2 = 3;
        } else {
            cnt2 = 4;
        }
        cout << min(cnt1, cnt2) << '\n';
    }
}