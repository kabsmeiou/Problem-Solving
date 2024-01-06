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
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }
        vector<int> aa(n), bb(n), cc(n);
        iota(aa.begin(), aa.end(), 0);
        iota(bb.begin(), bb.end(), 0);
        iota(cc.begin(), cc.end(), 0);
        sort(aa.begin(), aa.end(),
            [&](int i, int j) {
                return a[i] > a[j];
            });
        sort(bb.begin(), bb.end(),
            [&](int i, int j) {
                return b[i] > b[j];
            });
        sort(cc.begin(), cc.end(),
            [&](int i, int j) {
                return c[i] > c[j];
            });
        int ans = -1e9;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    int ax = aa[i], bx = bb[j], cx = cc[k];
                    if (ax != bx && bx != cx && ax != cx) {
                        ans = max(ans, a[ax] + b[bx] + c[cx]);
                    }
                }
            }
        }
        cout << ans << '\n';
    }
}