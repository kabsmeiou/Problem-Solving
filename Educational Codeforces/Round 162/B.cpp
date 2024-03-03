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
        for (int i = 0; i < n; i += 1) {
            int fi;
            cin >> fi;
            vp[i].first = fi;
        }
        for (int i = 0; i < n; i += 1) {
            int se;
            cin >> se;
            vp[i].second = se;
        }
        bool ok = true;
        vector<int> mobs(n + 1);
        for (int i = 0; i < n; i += 1) {
            mobs[abs(vp[i].second)] += vp[i].first;
        }
        int residue = 0;
        for (int i = 1; i <= n; i += 1) {
            residue += (k - mobs[i]);
            if (residue < 0) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
}