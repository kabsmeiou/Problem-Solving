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
        for (int i = 0; i < n; i += 1) {
            cin >> a[i];
        }
        vector<int> pref(n + 1);
        for (int i = 0; i < n; i += 1) {
            pref[i + 1] = a[i] + pref[i];
        }
        int q;
        cin >> q;
        while (q--) {
            int l, u;
            cin >> l >> u;
            int k = upper_bound(pref.begin() + l + 1, pref.end(), u + pref[l - 1]) - pref.begin();
            auto calc = [&](int x) {
                int cur = x * (x - 1) >> 1;
                return x * u - cur;
            };
            int ans = calc(pref[k] - pref[l - 1]), r = min(k, n);
            if (k - 1 >= l) {
                if (calc(pref[k - 1] - pref[l - 1]) >= ans) {
                    r = k - 1;
                }
            }
            cout << r << " \n"[q == 0];
        }
    }
}