#include <bits/stdc++.h>
#define int long long

using namespace std;

const int MOD = 1e9 + 7;

signed main() {
    int n;
    cin >> n;
    if (n < 2) {
        cout << 0;
        return 0;
    } else if (n == 2) {
        cout << n;
        return 0;
    }
    auto getMod = [&](int x, int y) {
        int ret = 1;
        for (int i = 0; i < y; i += 1) {
            ret = ret * x % MOD;
        }
        return ret;
    };
    int ans = getMod(10, n) - getMod(9, n) - getMod(9, n) + getMod(8, n);
    cout << ((ans % MOD) + MOD) % MOD;
} 