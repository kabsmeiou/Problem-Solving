#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int x, n, y;
        cin >> x >> y >> n;
        int ans = 1;
        x %= n;
        while (y > 0) {
            if (y & 1) {
                ans = ans * x % n;
            }
            x = x * x % n;
            y >>= 1;
        }
        cout << ans << '\n';
    }
    int buffer;
    cin >> buffer;
    return buffer;
}