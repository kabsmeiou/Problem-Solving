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
        vector<pair<int, int>> vp(n);
        for (int i = 0; i < n; i++) {
            int fi;
            cin >> fi;
            vp[i].first = fi;
        }
        for (int i = 0; i < n; i++) {
            int se;
            cin >> se;
            vp[i].second = se;
        }
        sort(vp.begin(), vp.end());
        vector<int> suff(n + 1);
        suff[n] = 1e9;
        for (int i = n - 1; i >= 0; i--) {
            suff[i] = min(suff[i + 1], vp[i].second);
        }
        int pos = 0;
        int dmg = k;
        bool ok = false;
        while (k > 0) {
            while (pos < n && vp[pos].first <= dmg) pos++;
            if (pos == n) {
                ok = true;
                break;
            }
            k -= suff[pos];
            dmg += k;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
}