#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        bool ok = true;
        for (int i = 1; i < n - 1; i += 1) {
            if (a[i] <=5 0) continue;
            int need = 2 * a[i - 1];
            a[i] -= need;
            a[i + 1] -= a[i - 1];
            a[i - 1] = 0;
        }
        for (int i = 0; i < n; i += 1) {
            if (a[i] != 0) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
}