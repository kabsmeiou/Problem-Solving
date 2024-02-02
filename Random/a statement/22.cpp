    #include <bits/stdc++.h>

    #define int long long

    using namespace std;

    #ifdef LOCAL
    #include "algo/debug.h"
    #else
    #define debug(...) 42
    #endif

    signed main() {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int n;
        cin >> n;
        n += 2;
        vector<int> a(n);
        for (int i = 1; i < n - 1; i++) {
            cin >> a[i];
        }
        vector<int> pref(n), suf(n);
        for (int i = 1; i < n; i++) {
            pref[i] = min(pref[i - 1] + 1, a[i]);
        }
        for (int i = n - 2; i >= 0; i--) {
            suf[i] = min(suf[i + 1] + 1, a[i]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, min(suf[i], pref[i]));
        }
        cout << ans << '\n';
    }