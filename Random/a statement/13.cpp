#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<int> k(n), c(m);
        for (auto &x : k) cin >> x;
        for (auto &x : c) cin >> x; 
        sort(k.rbegin(), k.rend());
        int ans = 0, cur = 0;
        for (int i = 0; i < n; i++) {
            if (k[i] > cur + 1) {
                ans += c[cur];
                cur += 1;
            } else {
                ans += c[k[i] - 1];
            }
        }
        cout << ans << '\n';
    }
} 