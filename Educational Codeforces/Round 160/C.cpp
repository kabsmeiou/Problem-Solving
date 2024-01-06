#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int q;
    cin >> q;
    vector<int> cnt(30);
    for (int i = 0; i < q; i++) {
        int t, v;
        cin >> t >> v;
        if (t == 1) {
            cnt[v] += 1;
        } else {
            for (int k = 29; k >= 0; k--) {
                int diff = min(v >> k, cnt[k]);
                v -= (diff << k);
            }
            cout << (v == 0 ? "YES" : "NO") << '\n';
        }
    }
}