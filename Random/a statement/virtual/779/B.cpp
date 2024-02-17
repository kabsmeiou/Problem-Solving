#include <bits/stdc++.h>
#define int long long
using namespace std;

int MOD = 998244353;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        if (n & 1) {
            cout << 0 << '\n';
        } else {
            if (n == 2) {
                cout << 1 << '\n';
                continue;
            } else if (n == 4) {
                cout << 4 << '\n';
                continue;
            }
            int ans = 1;
            for (int i = 1; i <= n / 2; i += 1) {
                ans *= i * i;
                ans %= MOD;
            }
            cout << ans << '\n';
        }
    }
}