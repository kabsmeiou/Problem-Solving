#include <bits/stdc++.h>
#define int long long
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
        vector<int> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = a[i] + pref[i];
        }
        int ans = 0;
        for (int z = 1; z < n; z++) {
            if (n % z != 0) continue;
            int mx = 0, mn = 2e18;
            for (int j = 0; j < n; j += z) {
                mx = max(pref[j + z] - pref[j], mx);
                mn = min(pref[j + z] - pref[j], mn);
            }
            ans = max(mx - mn, ans);
        }
        cout << ans << '\n';
    }
}