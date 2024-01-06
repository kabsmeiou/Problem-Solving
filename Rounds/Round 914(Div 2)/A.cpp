#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int a, b, x, y, xx, yy;
        cin >> a >> b >> x >> y >> xx >> yy;
        int ans = 0;
        auto check = [&ans, &a, &b, &xx, &yy](int k, int j) {
            int p = abs(k - xx);
            int q = abs(j - yy);
            ans += (p == a && q == b) || (p == b && q == a);
        };
        check(x + a, y + b);
        check(x - a, y - b);
        check(x + a, y - b);
        check(x - a, y + b);
        if (a != b) {
            check(x + b, y + a);
            check(x + b, y - a);
            check(x - b, y + a);
            check(x - b, y - a);
        }
        cout << ans << '\n';
    }
}