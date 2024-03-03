#include <bits/stdc++.h>
#define int long long
using namespace std;  
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for(auto &c : a) cin >> c;
        vector<int> pref(n + 1, 0);
        for (int i = 1; i <= n; i += 1) {
            pref[i] = pref[i - 1] + (a[i - 1] == 1);
        }
        vector<int> presum(n + 1, 0);
        for (int i = 1; i <= n; i += 1) {
            presum[i] = presum[i - 1] + (a[i - 1] - 1);
        }
        for (int i = 0; i < q; i += 1) {
            int l, r;
            cin >> l >> r;
            int cur = presum[r] - presum[l - 1];
            int ones = pref[r] - pref[l - 1];
            cout << (r - l > 0 && ones <= cur ? "YES" : "NO") << '\n';
        }
    }
}