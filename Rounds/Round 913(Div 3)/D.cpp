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
        vector<pair<int, int>> vp(n);
        for (int i = 0; i < n; i++) {
            int fi, se;
            cin >> fi >> se;
            vp[i] = {fi, se};
        }
        //binary search
        int l = 0, r = 1e12;
        while (l != r) {
            int k = (l + r) >> 1;
            bool ok = true;
            int le = 0, ri = 0;
            for (auto c : vp) {
                le -= k;
                ri += k;
                if (ri < c.first || le > c.second) {
                    ok = false;
                    break;
                }
                le = max(le, c.first);
                ri = min(ri, c.second);
            }
            if (ok) {
                r = k;
            } else {
                l = k + 1;
            }
        }
        cout << l << '\n';
    }
}