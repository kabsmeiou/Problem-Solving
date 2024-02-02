#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
        int q;
        cin >> q;
        vector<int> bit(30, 0);
        for (int i = 0; i < q; i++) {
            int t, v;
            cin >> t >> v;
            if (t == 1) {
                bit[v] += 1;
                continue;
            }
            vector<int> cur = bit;
            int j = 29;
            while (j >= 0) {
                int get = min(v >> i, bit[i]);
                v -= get << i;
                j -= 1;
            }
            cout << (!v ? "YES" : "NO") << '\n';
        }
}