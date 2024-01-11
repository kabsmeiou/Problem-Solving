#include <bits/stdc++.h>
#define int long long
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
        int ans = 0, cur = 0;
        if (n == 1) {
            cout << a[0] - 1 << '\n';
            continue;
        }
        if (n == 2) {
            if (a[0] > a[1]) {
                cout << a[0] - 1 << '\n';
            } else {
                cout << a[1] - 1 << '\n';   
            }
            continue;
        }
        int mx = a[0], z = 1;
        for (int i = 1; i + 1 < n; i++) {
            mx = max(mx, a[i]);
            if (a[i] < a[i - 1] && a[i] < a[i + 1]) {
                ans += mx - cur - z;
                if (!a[i]) z = 0;
                cur = a[i];
                mx = a[i + 1];
            }
        }
        cout << ans + mx - cur - z << '\n';
    }
}