#include <bits/stdc++.h>
#define int long long
using namespace std;
int MOD = 1e9;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k, ps, pb;
        cin >> n >> k >> ps >> pb;
        vector<int> p(n), a(n);
        for (auto &c : p) cin >> c;
        for (auto &c : a) cin >> c;
        int ps_max = 0, ps_cnt = 0, ps_index = ps - 1;
        int pb_max = 0, pb_cnt = 0, pb_index = pb - 1;
        for (int i = 0; i < min(k, n); i += 1) {
            ps_max = max(ps_max, a[ps_index] * (k - i) + ps_cnt);
            ps_cnt += a[ps_index], ps_index = p[ps_index] - 1;
            pb_max = max(pb_max, a[pb_index] * (k - i) + pb_cnt);
            pb_cnt += a[pb_index], pb_index = p[pb_index] - 1;
            //cout << ps_max <<' ' << pb_max << ' ' << k - 1 << ' ';
        }
        if (pb_max == ps_max) {
            cout << "Draw" << '\n';
        } else if (ps_max > pb_max) {
            cout << "Bodya" << '\n';
        } else {
            cout << "Sasha" << '\n';
        }
    }
}