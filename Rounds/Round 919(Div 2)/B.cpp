#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        int ans = -1e12;
        sort(a.begin(), a.end());
        vector<int> pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + a[i - 1];
        }
        for (int i = n; i >= (max(n - k, 0LL)); i--) {
            ans = max(ans, pref[max(0LL, i - x)] + ((pref[i] - pref[max(0LL, i - x)]) * -1));
        }
        if (n - k <= 0) {
            ans = max(0ll, ans);
        }
        cout << ans << '\n';
    }
}