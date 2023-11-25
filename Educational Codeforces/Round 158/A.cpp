#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        cin >> a[0];
        int ans = a[0];
        for (int i = 1; i < n; i++) {
            cin >> a[i];
            ans = max(a[i] - a[i - 1], ans);
        }
        cout << max(ans, (x - a[n - 1]) << 1) << '\n';
    }
}