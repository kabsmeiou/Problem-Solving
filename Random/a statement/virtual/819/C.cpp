#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int a, b, r;
        cin >> a >> b >> r;
        auto f = [&a, &b](int x) {
            return abs((a ^ x) - (b ^ x));
        };
        int ans = 1e18;
        for (int i = 0; i * i <= r; i++) {
            ans = min(ans, f(i));
        }
        cout << ans << '\n';
    }
}