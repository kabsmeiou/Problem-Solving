#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k, d;
        cin >> n >> k >> d;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        vector<int> b(k);
        for (auto &c : b) cin >> c;
        int ans = 0;
        int range = min(2 * n + 1, d);
        for (int i = 0; i < range; i++) {
            int cur = 0;
            for (int j = 0; j < n; j++) {
                cur += (a[j] == j + 1);
            }
            for (int j = 0; j < b[i % k]; j++) {
                a[j] += 1;
            }
            ans = max(ans, cur + ((d - i - 1) / 2));
        }
        cout << ans << '\n';
    }
}