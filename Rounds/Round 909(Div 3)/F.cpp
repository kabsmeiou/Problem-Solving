#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, q;
        cin >> n >> q;
        for (int i = 1; i < n; i++) {
            cout << i << ' ' << i + 1 << '\n';
        }
        int cur = n - 1;
        for (int i = 0; i < q; i++) {
            int d;
            cin >> d;
            if (d == cur) {
                cout << -1 << ' ' << -1 << ' ' << -1 << "\n";
            } else {
                cout << n << ' ' << cur << ' ' << d << "\n";
            }
            cur = d;
        }
    }
}