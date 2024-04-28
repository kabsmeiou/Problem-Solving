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
        for (auto &c : a) cin >> c;
        int front = (k + 1) / 2, back = k / 2;
        vector<int> pref(n), suf(n);
        int x = 0;
        for (int i = 0; i < n; i += 1) {
            x += a[i];
            pref[i] = x;
        }
        x = 0;
        for (int i = n - 1; i >= 0; i -= 1) {
            x += a[i];
            suf[i] = x;
        }
        int l = upper_bound(pref.begin(), pref.end(), front) - pref.begin();
        int r = upper_bound(suf.rbegin(), suf.rend(), back) - suf.rbegin();
        cout << (pref[n - 1] <= k ? n : min(l + r, n)) << '\n';
    }
}