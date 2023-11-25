#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        int ans = a[0], mn = min(0, ans), ret = a[0];
        for (int i = 1; i < n; i++) {
            if ((a[i] & 1) == (a[i - 1] & 1)) {
                mn = 0, ret = 0;
            }
            ret += a[i];
            ans = max(ans, ret - mn);
            mn = min(mn, ret);
        }
        cout << ans << '\n';
    }
}