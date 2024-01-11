#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &c : a) cin>> c;
        sort(a.begin(), a.end());
        vector<int> pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + a[i - 1];
        }
        int ans = 0;
        for (int i = 0; i <= k; i++) {
            ans = max(ans, pref[n - (k - i)] - pref[i * 2]);
        }
        cout << ans << '\n';
    }
}