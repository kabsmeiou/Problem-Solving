#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        int q = 0, p = 0;
        for (int i = 0; i < n; i++) {
            q += a[i];
            p += (a[i] + x - 1) / x;
        }
        cout << (q + x - 1) / x << ' ' << p << '\n';
    }
} 