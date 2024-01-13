#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, x, t;
        cin >> n >> x >> t;
        t = t / x;
        if (n <= t) {
            cout << n * (n - 1) / 2 << '\n';
        } else {
            cout << t * (t - 1) / 2 + t * (n - t) << '\n';
        }
    }
} 