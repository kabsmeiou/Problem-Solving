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
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += abs(a[i] - b[i]);
        }
        int cur = ans;
        for (int i = n - 1; i >= 0; i--) {
            cur -= abs(a[i] - b[i]);
            cur += abs(a[i] - b[i + (m - n)]);
            ans = max(cur, ans);
        }
        cout << ans << '\n';
    }
}